//Least Number among n integer
#include <stdio.h>
int main ()
{
    int i,n, a[10],least;
    printf ("Enter the number of terms \n ");
    scanf ("%d",&n);
    for (i = 0; i <n;i++)
    {
        scanf ("%d",&a[i]);

    }
    least = a[0];
    for (i = 0;i <10;i++)
    {
        if (a[i] <least)
        a[i] = least;
    }
    printf ("The least numeber in an array is %d\n",least);


}