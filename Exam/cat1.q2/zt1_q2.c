#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void select(int arry[], int size){
	int key ,i , j ,temp;
	for ( i=0 ;i <size; i++){
		key=i;
			for (j=1+i ;j<size; j++){
			 if(arry[key]>arry[j]){
			 	key=j;
			 }
		}
		temp=arry[i];
		arry[i]=arry[key];
		arry[key]=temp;
	}
}
	int binary(int arry[],int size , int target){
		int left, right,mid; 
		left=0;
		right=size-1;
		while(left<=right){
		mid=(left+right)/2;
		if(target==arry[mid]){
			return mid;	
		}
		 if(target<arry[mid]){
			right=mid-1;
		}else if(target>arry[mid]){
			left= mid+1;
		}
	}
	return -1;
}
void printarry(int arr[],int size){
	int i;
	printf("Ayyay element are :");
	for ( i=0 ;i <size; i++){
		printf("%d ",arr[i]);
	}
		printf("\n");
}
int main(int argc, char *argv[]) {
	int idx,target;
	int Oarry[]={23,45,12,5,67,100,78};
	int arry[]={23,45,12,5,67,100,78};
	int size=sizeof(arry)/sizeof(arry[0]);
	select(arry,size);
	target=67;
	idx=binary(arry,size,target);
	printf("the index of element: %d is:%d",target,idx);
	printf("\nSorted array is :\n");
	printarry(arry,size);
		printf("Orignal array is :\n");
	printarry(Oarry,size);
	return 0;
}
