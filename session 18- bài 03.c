#include<stdio.h>
struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct SinhVien students[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
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
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s", students[i].phoneNumber);
        printf("\n");
    }
    return 0;
}
