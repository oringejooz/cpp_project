/*Swarnima Bisht
500105696*/

#include<stdio.h>
#include<string.h>
struct student_record{
    char name[50];
    int SAP_ID;
    int enrolno;
    struct date{
        int day;
        int month;
        int year;
    } d;
};

int main(){
    int num;
    struct student_record stu1;
    printf("Enter no. of students = ");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("\n Enter name of Student = \n");
        scanf("%s",stu1.name[50]);
        printf("Enter SAP ID of Student = \n");
        scanf("%d",&stu1.SAP_ID);
        printf("Enter Enrollment Number of Student = \n");
        scanf("%d",&stu1.enrolno);
        printf("Enter Birth Date of Student = \n");
        scanf("%d",&stu1.d.day);
        printf("Enter Birth Month of Student = \n");
        scanf("%d",&stu1.d.month);
        printf("Enter Birth Year of Student = \n");
        scanf("%d",&stu1.d.year);

    }
}

  

