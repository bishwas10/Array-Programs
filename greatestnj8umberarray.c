//Greatest Number among Ten Integer
#include <stdio.h>
int main ()
{
    int a[10],i,greatest;
    printf ("Enter ten integer nummber :\n");
    for (i = 0;i<10;i++)
    {
       scanf ("%d",&a[i]);
    }
    greatest = a[0];
    for (i = 0;i <10;i++)
    {
        if (a[i] > greatest)
        {
            greatest = a[i];
        }
    }
    printf ("The greatest numeber is %d",greatest);
    return 0;
}