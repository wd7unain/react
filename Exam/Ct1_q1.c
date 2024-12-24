#include <stdio.h>
#include <stdlib.h>

struct student {
    int studId;
    char studNames[50];
    char studDepart[50];
    char studFaculty[50];
};

int main(int argc, char *argv[]) {
    struct student St;
    	printf("Enter student ID: ");
    		scanf("%d", &St.studId);
   		 printf("Enter student Name: ");
    		scanf("%s", St.studNames);
    	printf("Enter student department: ");
    		scanf("%s", &St.studDepart);
    	printf("Enter student Faculty: ");
   			 scanf("%s", &St.studFaculty);
   		 printf("\nStusent Details:\n");
    	 printf("ID: %d\n", St.studId);
    	printf("Name: %s\n", St.studNames);
    	printf("Department: %s\n", St.studDepart);
    	printf(" Facultyy: %s\n", St.studFaculty);
	return 0;
}
