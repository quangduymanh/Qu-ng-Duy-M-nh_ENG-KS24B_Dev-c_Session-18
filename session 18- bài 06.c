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
    printf("Nhap thong tin sinh vien can them:\n");
    students[n].id = n + 1;
    printf("Nhap ten: ");
    fgets(students[n].name, sizeof(students[n].name), stdin);
    students[n].name[strcspn(students[n].name, "\n")] = '\0';
    printf("Nhap tuoi: ");
    scanf("%d", &students[n].age);
    getchar();
    printf("Nhap so dien thoai: ");
    fgets(students[n].phoneNumber, sizeof(students[n].phoneNumber), stdin);
    students[n].phoneNumber[strcspn(students[n].phoneNumber, "\n")] = '\0';
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
