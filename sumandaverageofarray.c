//Sum and Average of an array
#include <stdio.h>
int main ()
{
    int n, a[10],sum =0,average,i;
    printf ("Enter the number of terms \n");
    scanf ("%d",&n);
    for (i = 0; i <n;i++)
    {
        scanf ("%d",&a[i]);
        sum = sum +a[i];
    }
    average = sum /n;
    printf ("Sum of an array is %d\n",sum);
    printf ("Average of an array is %d\n",average);
    return 0;
}