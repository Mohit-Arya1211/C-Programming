#include <stdio.h>
#include<conio.h>
int main()
{
    int r, c, a[10][10], b[10][10], result[10][10], i, j, n, k;

    printf("Enter number of rows : ");
    scanf("%d", &r);
    printf("Enter number of columns : ");
    scanf("\n %d", &c);

    printf("\nEnter elements of 1st matrix:\n");

    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }
 printf("\n Enter a choice from below :");
 printf("\n Enter 1 for Addition of Matrices .");
 printf("\n Enter 2 for Subtraction of Matrices .");
 printf("\n Enter 3 for Multiplication of Matrices .");
 printf("\n Enter 4 for Transpose of Matrices .");
 printf("\n Enter 5 for Upper Triangular of Matrices .");
 printf("\n Enter 6 for Lower Triangular of Matrices .");
 printf("\n");
 scanf("\n %d", &n);
 switch(n)
 {
 case 1:
     for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            result[i][j]=a[i][j]+b[i][j];
        }
    printf("\nSum of two matrix is: \n\n");

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {

            printf("%d   ",result[i][j]);

            if(j==c-1)
            {
                printf("\n\n");
            }
        }
        break;
  case 2:
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            result[i][j]=a[i][j]-b[i][j];
        }
    printf("\nDifference of two matrix is: \n\n");

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {

            printf("%d   ",result[i][j]);

            if(j==c-1)
            {
                printf("\n\n");
            }
        }
        break;
 case 3:
    for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
          result[i][j] = 0;
            for (k = 0; k<r; k++)
            {
                result[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	printf("\nMultiplication of two Matrices : \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d  ", result[i][j]);
		}
		printf("\n");
	}
	break;
 case 4:
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            result[j][i] = a[i][j];
        }
        printf("\nTranspose of Matrix:\n");
    for(i=0; i<c; ++i)
        for(j=0; j<r; ++j)
        {
            printf("%d  ",result[i][j]);
            if(j==r-1)
                printf("\n\n");
        }
        break;
 case 5:
  printf("\nThe Upper Triangular Matrix is : \n");
   for(i=0;i<r;i++){
      printf("\n");
      for(j=0;j<c;j++)
           if(i<=j)
             printf("% 4d",a[i][j]);
           else
             printf("% 4d",0);
  }
       printf("\n\n");
    break;
 case 6:
    printf("\nThe Lower Trianular Matrix is :\n");
   for(i=0;i<r;i++){
      printf("\n");
      for(j=0;j<c;j++)
           if(i>=j)
             printf("% 4d",a[i][j]);
           else
             printf("% 4d",0);
  }
       printf("\n\n");
    break;
 default:
    printf("Enter Correct Choice.");
}
 getch();
}



