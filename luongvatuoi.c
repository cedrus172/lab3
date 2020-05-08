
#include <stdio.h>_dbdao.h

void main(int argc, char* argv[])
{

    int luong, tuoi; // khai báo biến kiểu số nguyên là int số thực là float ,..

    char name[50]; // khai báo biến kiểu kí tự là char trong đó 50 là tối đa 50 kí tự :D

    printf("\nNhap ten viet lien khong dau:"); 

    scanf("%s", &name); 

    printf("\nNhap vao so tuoi  :\n"); 

    scanf("%d", &tuoi); 

    printf("\nNhap vao so luong  :\n"); 

    scanf("%d", &luong); 


    printf("\nTuoi cua %s la %d Tuoi\n", name,tuoi); // in ra tuổi 

    printf("\Luong cua %s la %d VND\n", name,luong); // in ra lương


    return 0;
}

