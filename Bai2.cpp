#include <stdio.h>

// Khai b�o ki?u d? li?u h?n s?
typedef struct {
    int nguyen;
    int tu;
    int mau;
} HonSo;

// H�m nh?p h?n s?
void nhapHonSo(HonSo *hs) {
    printf("Nhap phan nguyen: ");
    scanf("%d", &hs->nguyen);
    printf("Nhap tu so: ");
    scanf("%d", &hs->tu);
    printf("Nhap mau so: ");
    scanf("%d", &hs->mau);
}

// H�m xu?t h?n s?
void xuatHonSo(HonSo hs) {
    printf("%d %d/%d", hs.nguyen, hs.tu, hs.mau);
}

int main() {
    HonSo hs;
    nhapHonSo(&hs);
    xuatHonSo(hs);
    return 0;
}

