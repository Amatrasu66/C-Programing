//program to find the min and max element in an array
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number for array size : ");
    scanf("%d",&num);
    
    int arr[num];
    printf("enter the elements of array : \n");
    for(int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int min = arr[0];
    int max = arr[0];
    
    for(int i = 1; i < num; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("the minimum element is : %d\n",min);
    printf("the maximum element is  : %d\n",max);
    return 0;
}
