#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    int *ptr1,*ptr2;
    ptr1=arr1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",(ptr1+i));
    }
    for(int i=0;i<n;i++)
    {
        *(ptr2+i)=*(ptr1+i);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr2 + i));
    }
}