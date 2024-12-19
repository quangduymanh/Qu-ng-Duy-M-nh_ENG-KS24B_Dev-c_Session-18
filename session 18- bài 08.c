#include<stdio.h>
#include<string.h>
struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct SinhVien students[50] = {
        {1, "Quang Duy Manh", 18, "0365303096"},
        {2, "Nguyen Tran Bao Khanh", 18, "0987654321"},
        {3, "Nguyen Manh Thang", 18, "0912345678"},
        {4, "Phan Phuoc Anh", 18, "0998765432"},
        {5, "Phung Quang Tien", 18, "0931234567"}
    };
    int n = 5;
    int position;
    struct SinhVien newStudent;
    printf("Nhap vi tri can chen (1 - %d): ", n + 1);
    scanf("%d", &position);
    getchar();
    if (position < 1 || position > n + 1) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }
    printf("Nhap ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';
    printf("Nhap tuoi: ");
    scanf("%d", &newStudent.age);
    getchar();
    printf("Nhap so dien thoai: ");
    fgets(newStudent.phoneNumber,sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0';
    newStudent.id = n + 1;
    for (int i = n; i >= position - 1; i--) {
        students[i + 1] = students[i];
    }
    students[position - 1] = newStudent;
    n++;
    printf("\nThong tin tat ca sinh vien trong danh sach:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n", students[i].phoneNumber);
        printf("\n");
    }
    return 0;
}

