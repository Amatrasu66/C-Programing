//swap two varible without the third one
#include<stdio.h>
int main()
{
    int a,b;
     printf("enter the value for a : ");
     scanf("%d",&a);
     printf("enter the value for b : ");
     scanf("%d",&b);
     
     a = a + b;
     b = a - b;
     a = a - b;
     
     printf("The swapped values are of a : %d\n",a);
     printf("The swapped values are of b : %d\n",b);
     
     return 0;
}
