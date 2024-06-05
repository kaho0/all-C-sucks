#include<stdio.h>
int maxAndmin(int num1,int num2,int *max,int *min)
{

    if(num2>num1)
    {
        *max=num2;
        *min=num1;
      
    }

    else{
        *max=num1;
        *min=num2;
    }
}
int main()
{
  int n1,n2,reMax,reMin;
  scanf("%d %d",&n1,&n2);
  maxAndmin(n1,n2,&reMax,&reMin);
  printf("%d",reMax);
  printf("%d",reMin);
}