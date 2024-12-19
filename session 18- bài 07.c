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
    char deleteName[50];
    int found = 0;
    printf("Nhap ten sinh vien can xoa: ");
    fgets(deleteName, sizeof(deleteName), stdin);
    deleteName[strcspn(deleteName, "\n")] = '\0';

    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, deleteName) == 0) {
            found = 1;

            for (int j = i; j < n - 1; j++) {
                students[j] = students[j + 1];
            }
            n--;
            printf("Da xoa sinh vien: %s\n\n", deleteName);
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien voi ten: %s\n\n", deleteName);
    }
    printf("Thong tin tat ca sinh vien trong danh sach:\n");
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

