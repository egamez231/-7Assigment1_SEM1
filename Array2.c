#include <stdio.h>


int main ()
{
    int number [10], i, temp, sum;

    printf("Enter five numbers : ");
    for (i=0;i<5;++i)
    {
        scanf("%d", &number[i]);
    }

    // Sum of the number
    for (i=0;i<5;++i)
    {
        sum += number[i];
    }

    // Re-Arange
    for (i=0;i<5/2;i++)
    {
        temp = number [i];
        number [i] = number [5 - i - 1];
        number [5 - i - 1] = temp;
    }

    // Print
    printf ("The sum of the numbers is : %d\n",sum);
    printf ("The numbers in reverse order are :");
    for (i=0;i<5;++i)
    {
        printf ("%d\t",number [i]);
    }


return 0;
}
