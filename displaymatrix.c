#include <stdio.h>
int main ()
{
    int a[3][3],i,j;
    printf ("Enter the 3 by 3 matrix");
    for (i = 0;i <3;i++)
    {
        for (j =0;j<3;j++)
        {
            scanf ("%d",&a[i][j]);
        }
        //printf ("The entered matrix is : \n");
    }
    printf ("The entered matrix is : \n");
    

    for (i = 0;i <3;i++)
    {
        for (j =0;j <3;j++)
        {
            printf ("%d ",a[i][j]);

        }
        printf ("\n");
    }
    return 0;
}