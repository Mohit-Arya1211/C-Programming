#include<stdio.h>
#include<conio.h>
void main()
{
    int ar[15], x, i, n, a;
    printf("Enter the Size of the array : \n");
    scanf("%d", &n);
    for(i=0; i<n; ++i)
    {
        printf("\n Enter the elements %d in Array : ", i+1);
        scanf("%d", &ar[i]);
    }
    for(i=0; i<n; ++i)
    {printf(" %d ,", ar[i]);}
    printf(" \n Enter the element you want to search :");
    scanf("%d", &x);
    int first = 0;
    int end = n-1;
    while(first <= end)
    {
        int mid = (first + end)/2;
        if(ar[mid]<x)
            first = mid+1;
        else if (ar[mid]==x)
            {
            printf("\n The Position of the element is : %d", mid+1);
             break;
            }
        else
        end = mid-1;
    }
    if(first>end)
        printf("%d element not found");
    getch();
}
