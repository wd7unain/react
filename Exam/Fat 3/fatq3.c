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

void printarry(int arr[],int size){
	int i;
	printf("Ayyay element are :");
	for ( i=0 ;i <size; i++){
		printf("%d ",arr[i]);
	}
		printf("\n");
}
int main(int argc, char *argv[]) {

	int arry[]={13,35,2,15,47,90,68};
	int size=sizeof(arry)/sizeof(arry[0]);

	printf("Orignal array is :\n");
	printarry(arry,size);
	
	printf("\nSorted array is :\n");
	select(arry,size);
	printarry(arry,size);
	return 0;
}
