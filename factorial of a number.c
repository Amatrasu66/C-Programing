#include<stdio.h>
int main()
{
    int fac = 1 ,numb,i;
    printf("enter the value of which you want the factorial of : ");
    scanf("%d",&numb);

    if(numb <= 0)
    {
        printf("invalid");
    }

    else
    {
        for(i = 1; i <= numb; ++i)
        {
            fac *= i;
            printf("\n The factorial is : %d",fac);
        }
        
    }
    return 0;
}
