#include<stdio.h>
#include<conio.h>
void main()
{
    int array[50], i, n;
    printf("\n Enter How Many Numbers You Want to Compare :");
    scanf("%d", &n);
    printf("\n");
    for(i=0; i<n; ++i)
    {
      printf("\n Enter Number %d : ", i+1);
      scanf("%d", &array[i]);
    }
    for(i=0; i<n; ++i)
    {
        if(array[0]<array[i])
            array[0]=array[i];
    }
    printf("Larest Number is = %d",array[0]);
    getch();
}
