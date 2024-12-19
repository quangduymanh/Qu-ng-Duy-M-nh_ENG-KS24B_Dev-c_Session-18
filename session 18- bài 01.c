#include<stdio.h>
struct student{
	char name[50];
	char phonenumber[20];
	int age;
};
int main(){
	struct student student1={"Quang Duy Manh","0365303096",18};
	printf("name: %s\n",student1.name);
	printf("phonenumber: %s\n",student1.phonenumber);
	printf("age: %d\n",student1.age);
	return 0;
}
