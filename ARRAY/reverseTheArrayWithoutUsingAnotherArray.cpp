//reverse the array without using another array
#include<stdio.h>
int main()
{
    float sum =0,avg;
    int arr[10]={1,5,3,4,9,6,2,8,7,0};
    printf("elements of array in reverse order : ");
    for(int i=9;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    printf("\nsum is : %.2f",sum);
    avg=sum/10;

    printf("\nthe average is : %.2f",avg);

    return 0;
}