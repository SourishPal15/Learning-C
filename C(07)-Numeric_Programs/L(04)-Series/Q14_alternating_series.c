/* Q.14) Write a menu driven program and ask for the users' choice to
print these series and also find the sum of these series upto N 

(i) Alternating Sign Series
Here, the numbers themselves increase normally, but their
signs alternate

1 - 2 + 3 - 4 + 5 - 6 + 7 - ...N

(ii) Alternating Square Series
This is similar to the alternating sign series,
except every number is squared

1² - 2² + 3² - 4² + 5² - 6² + ...N

(iii) Alternating Cube Series
Same concept again, but each number is cubed.

1³ - 2³ + 3³ - 4³ + 5³ - ...N */

#include <stdio.h>

int main()
{
    int c,n,i,s=0;

    printf("------------------------------");
    printf("\n1. Alternating Sign Series");
    printf("\n2. Alternating Square Series");
    printf("\n3. Alternating Cube Series");
    printf("\n------------------------------");

    printf("\nEnter your choice: ");
    scanf("%d",&c);

    switch(c)
    {
        case 1:
        {
            printf("Enter the last term (N): ");
            scanf("%d",&n);

            printf("Alternating Sign Series: ");
            for(i=1;i<=n;i++)
            {
                if(i%2==0)
                {
                    printf("-%d ",i);
                    s = s - i;
                }
                else
                {
                    printf("%d ",i);
                    s = s + i;
                }
            }

            printf("\nSum of Alternating Sign Series: %d", s);
            break; 
        }
        case 2:
        {
            printf("Enter the last term (N): ");
            scanf("%d",&n);

            printf("Alternating Square Series: ");
            for(i=1;i<=n;i++)
            {
                if(i%2==0)
                {
                    printf("-%d ",i*i);
                    s = s - (i*i);
                }
                else
                {
                    printf("%d ",i*i);
                    s = s + (i*i);
                }
            }

            printf("\nSum of Alternating Square Series: %d", s);
            break; 
        }
        case 3:
        {
            printf("Enter the last term (N): ");
            scanf("%d",&n);

            printf("Alternating Cube Series: ");
            for(i=1;i<=n;i++)
            {
                if(i%2==0)
                {
                    printf("-%d ",i*i*i);
                    s = s - (i*i*i);
                }
                else
                {
                    printf("%d ",i*i*i);
                    s = s + (i*i*i);
                }
            }

            printf("\nSum of Alternating Cube Series: %d", s);
            break; 
        }
        default:
        {
            printf("Wrong Choice!");
            break;
        }
    }

    return 0;
}