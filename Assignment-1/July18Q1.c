#include<stdio.h>
struct Student{
	char name[30];
	int rollNumber;
	int marks[5];
	int totalMarks; 
	float percentage;
}; 
void displayDetailsStudent(struct Student students[],int numberStudents,int rollNumber){
	int i,m;
	for(i=0;i<numberStudents;i++){
		if(rollNumber==students[i].rollNumber){
			printf("The student's name: %s\n",students[i].name);
			printf("The student's roll number: %d\n",students[i].rollNumber);
			printf("The student's marks\n");
			for(m=0;m<5;m++){
				printf("%d ",students[i].marks[m]);
			}
			printf("\nThe student's total marks: %d\n",students[i].totalMarks);
			printf("The student's percentage: %.2f\n",students[i].percentage);
			printf("\n");
			break;
		}
	}
}
void main()
{
	struct Student students[100];
	int n,i,m,r;
	int rollNumber;
	float percentage1;
	float percentage2;
	printf("Enter the student's name: ");
    scanf("%d",&n);
    printf("Enter the student's roll number: ");
	scanf("%d",&r);
    for(i=0;i<5;i++){
		fflush(stdin);
        scanf("%d",&students[i].rollNumber);
		for(m=0;m<5;m++){
			printf("Enter the student's mark %d: ",(m+1));
			scanf("%d",&students[i].marks[m]);
		}
		printf("\n");
	}
}