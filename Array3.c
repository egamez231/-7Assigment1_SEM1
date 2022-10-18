#include <stdio.h>

int main()
{
    int bright[5][5], i, j,max = 0, count = 0;


    for(i=0; i<5; i++)
    {
      for(j=0;j<5;j++)
      {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &bright[i][j]);

         if (bright[i][j] > 14 || bright[i][j] < 0)
         {
                printf("Invalid Pleasae Enter amount above 0 and below 14\n");
                printf("Enter value for disp[%d][%d]:", i, j);
                scanf("%d", &bright[i][j]);
         }
      }
    }

   // finding the max
    for(i=0; i<5; i++)
    {
            for(j=0;j<5;j++)
            {
                if (bright [i][j]>max)
                {
                    max = bright [i][j];
                }
            }
    }
    printf("%d",max);

    // Count frequency
    for(i=0; i<5; i++)
    {
        for(j=0;j<5;j++)
        {
            if (bright[i][j] == max)
            {
                count++;
            }

        }
    }
    printf ("\n%d", count);

    for(i=0; i<5; i++)
    {
        for(j=0;j<5;j++)
        {
            if (bright[i][j] == max)
            {
                printf ("\nPixel at [%d][%d]= %d",i,j,max);
            }

        }
    }

return 0;
}





