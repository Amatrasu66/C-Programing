//Find if the string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int ispal = 1;
    
    printf("enter the string : ");
    scanf("%s",str);
    
    int len = strlen(str);
    
    for(int i = 0; i < len/2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            ispal = 0;
            break;
        }
    }
    
    if(ispal == 1)
    {
        printf("Yes it's is palandrome : %s",str);
    }
    else
    {
        printf("Nope try again");
    }
    return 0;
}
