 // Initializing and Displaying array
#include <stdio.h>
int main ()
{
    int i;
    int a[] = {1,2,3,4,5,6};
    float b[] = {1.4,2.4,3.5};
    printf ("Printing integer Array:\n");
    for (i = 0; i <=6;i++)
    {
        printf ("%d\n",a[i]);


    }
    printf ("Printing Floating array:\n");
    for (i = 0;i <=3;i++)
    {
        printf ("%f\n",b[i]);
    }
    return 0;
}
