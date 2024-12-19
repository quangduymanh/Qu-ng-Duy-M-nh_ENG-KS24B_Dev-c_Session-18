#include<stdio.h>;
struct SinhVien{
	char name[40];
	int age;
	char phonenumber[30];
};
int main(){
	struct SinhVien student;
	printf("Nhap Ten Sinhvien");
	fgets(student.name, sizeof(student.name),stdin);
	printf("nhap tuoi sinh vien:");
	scanf("%d",&student.age);
	getchar();
	printf("Nhap so dien thoai sinh vien");
	fgets(student.phonenumber, sizeof(student.phonenumber),stdin);
	printf("ten cua sinh vien la:%s\n",student.name);
	printf("tuoi cua sinh vien:%d\n",student.age);
	printf("so dien thoai cua sinh vien:%s\n",student.phonenumber);
	return 0;
}

