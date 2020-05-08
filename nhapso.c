#include <stdio.h>
#include<limits.h> // for int,char macros 
#include<float.h> // for float,double macros 
void main()
{
//khai báo biến
    char abc[200];
    int songuyen;
    float length;
    double area;
    long liteyrs;
    short arm;    
////////////////////////

    printf("\nSize of char is %d\n", sizeof abc); 
    printf("\nSize of short is %d\n", sizeof arm);
    printf("\nSize of int is %d\n", sizeof songuyen);
    printf("Size of float is %d\n", sizeof length);
    printf("Size of double is %d\n", sizeof area);
    printf("Size of long long is %d\n", sizeof liteyrs);
///nhập//
    printf("\nnhap abc toi da 200 ki tu :");
    scanf("%s", &abc);
    printf("\nnhap so nguyen :");
    scanf("%d", &songuyen);
    printf("\nnhap length :");
    scanf("%f", &length);
    printf("\nnhap area :");
    scanf("%lf", &area);
    printf("\nnhap liteyrs :");
    scanf("%ld", &liteyrs);
    printf("\nnhap arm :");
    scanf("%hd", &arm);

//in ra giá trị///

    printf("\n gia tri cua abc la : %s", abc);
    printf("\n gia tri cua length : %f", length);
    printf("\n gia tri cua area : %lf", area);
    printf("\n gia tri cua liteyrs : %ld", liteyrs);
    printf("\n gia tri cua arm : %hd", arm); 
    return 0;
}