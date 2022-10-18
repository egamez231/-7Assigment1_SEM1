#include <stdio.h>


int main ()
{
    int temprature[100],i,sum;
    double avg;

    printf("Please enter 10 temprature:");

    // Get the 10 temperature
    for (i=0;i<10;++i)
    {
        scanf("%d",&temprature[i]);
    }

    // Display the array
    for (i=0;i<10;++i)
    {
        printf("%d\t",temprature[i]);
    }

        // Calculate the average
    for (i=0;i<10;++i)
    {
        sum += temprature[i];
    }

    avg = sum / 10;
    printf("\n\nAverage %.2lf", avg);


return 0;
}
