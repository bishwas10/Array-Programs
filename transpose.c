#include <stdio.h>
int main ()
{
    int a[3][3],c[3][3],i,j;
    printf ("Enter a matrix :\n");
    for (i =0;i<3;i++)
    {
        for (j =0;j<3;j++)
        {
            scanf ("%d",&a[i][j]);
            c[j][i]= a[i][j];
        }
    }
    printf ("Entered matrix is : \n");
    for (i =0;i<3;i++)
    {
        for (j =0;j<3;j++)
        {
            printf ("%d ",a[i][j]);
        }
        printf ("\n");
    }
    printf ("Transposed matrix is :\n");
    for (i =0;i<3;i++)
    {
        for (j =0;j<3;j++)
        {
            printf ("%d ",c[i][j]);
        }
        printf ("\n");
    }
    return 0;
}