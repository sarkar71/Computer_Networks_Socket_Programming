#include<stdio.h>
#include<stdlib.h>

struct dob{
	int day, month, year;
};

struct student_info{
	int roll_no;
	char name[50];
	float CGPA;
	struct dob age;
};

void displayStudentInfoByValue(struct student_info s){
	printf("Student Roll No : %d", s.roll_no);
	printf("Student Name : %s", s.name);
	printf("Student CGPA : %f", s.CGPA);
	printf("Student Age : %d", s.age.day, s.age.month, s.age.year);
}

void displayStudentInfoByReference(struct student_info *s){
	printf("Student Roll No : %d", s->roll_no);
	printf("Student Name : %s", s->name);
	printf("Student CGPA : %f", s->CGPA);
	printf("Student Age : %d/%d/%d", s->age.day, s->age.month, s->age.year);
}
int main(){
	struct student_info s;
	printf("Enter Roll No. : ");
	scanf("%d", &s.roll_no);
	printf("Enter Name :");
	scanf("%s", s.name);
	printf("Enter CGPA : ");
	scanf("%f", &s.CGPA);
	printf("Enter Student Age :");
	scanf("%d\n", &s.age.day);
	scanf("%d\n", &s.age.month);
	scanf("%d\n", &s.age.year);
	printf("Student Info using Call By Value : \n");
	displayStudentInfoByValue(s);
	printf("Student Info using Call By Reference : \n");
	displayStudentInfoByReference(&s);
}
