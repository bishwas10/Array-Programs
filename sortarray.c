//Sorting number in an array
#include <stdio.h>
int main ()
{
    int n,a[10],i,j,temp;
    printf ("Enter the number of terms \n");
    scanf ("%d",&n);
    for (i = 0;i <n;i++)
    {
        scanf ("%d",&a[i]);

    }
    for (i = 0;i <n;i++)
    {
        for (j = i+1;j <n;j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf ("The numbers are sorted in an Ascending Order \n");
    for (i =0;i <n;i++)
    
        printf ("%d\n",a[i]);
    }
    return 0;
}