//print fibbonachi series using reoccursion fuction
#include<stdio.h>
int fibbonachi(int num);
int main()
{
    int num;
    printf("Enter the number that you wanna find the fibbonachi of : ");
    scanf("%d",&num);
    
    fibbonachi(num);
    return 0;
}

int fibbonachi(int num)
{
    if(num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }
    int fibbonum1 = fibbonachi(num - 1);
    int fibbonum2 = fibbonachi(num - 2);
    int fibbonum = fibbonum1 + fibbonum2;
    printf("The fibbonachi series of %d is : %d \n",num,fibbonum);
    return fibbonum;
}
