#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a[10],b[10],c[10][10],i,j,k,sum;
    int m1,m2,n1,n2;
    printf ("Enter the order of the first matrix m1 x n1:\n");
    scanf ("%d %d ",&m1,&n1);
    printf ("Enter the order of the second matrix m2 x n2");
    scanf ("%d %d",&m2,&n2);
    if (n!= m2)
    {
        printf ("The matrix is not possible \n");
        printf ("Existing...");
        exit (1);
    }
    printf ("Enter the first matrix \n");
    for (i =0;i<m1;i++)
    for (j =0;j<n1;j++)
    {
        scanf ("%d",&a[i][j]);
    }
    printf ("Enter the Second matrix \n");
    for (i =0;i<m2;i++)
    for (j =0;j<n2;j++)
    {
        scanf ("%d",&b[i][j]);
    }
    for (i =0;i<m1;i++)
    {
        for (j =0;j<n2;j++)
        {
            sum =0;
            for (k =0;k<n1;k++)
            {
                sum = sum+ a[i][k]*b[k][j];
            }
            c[i][j]= sum;
        }
    }
    printf ("The product of the matrix is \n");
    for (i =0;i<m1;i++)
    {
        for (j =0;j<n2;j++)
        {
            printf ("%d ",c[i][j]);
        }
        printf ("\n");
    }


    return 0;
}