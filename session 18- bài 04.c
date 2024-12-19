#include<stdio.h>
struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct SinhVien students[50];
    int n = 5;
    for (int i = 0; i < n; i++) {
        students[i].id = i + 1;
        printf("Nhap thong tin sinh vien %d:\n", students[i].id);
        printf("Nhap ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);
        getchar();
        printf("Nhap so dien thoai: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
        printf("\n");
    }
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien %d:\n", students[i].id);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s", students[i].phoneNumber);
        printf("\n");
    }
    return 0;
}
