#include <stdio.h>

int main(){
    char ten[40];
    char ho[40];
    int songaycong;
    int luong1ngay;
    printf("nhap ten:");
    gets(ten);
 
    printf("\nnhap so ngay cong: ");
    scanf("%d",&songaycong);
    printf("\nnhap luong 1 ngay:");
    scanf("%d",&luong1ngay);

    printf("\n-------------");
    printf("\n THONG TIN");
    printf("\n HO    TEN     TIEN LUONG");
    printf("\n%2s %5s %11d",ten,ho,songaycong*luong1ngay);







    return 0;
}