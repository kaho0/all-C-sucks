#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=12,b=4;
    printf("BEfore swap: %d,%d\n",a,b);
    swap(&a,&b);
    printf("After swap: %d,%d",a,b);
}