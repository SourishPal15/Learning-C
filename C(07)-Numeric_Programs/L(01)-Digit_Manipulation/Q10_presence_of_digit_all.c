/* Q.10) Take a number and take a single digit as input, and then check, 
if that digit is present (all occurences) in that number,
if present then also tell at which position it is present. */

#include <stdio.h>

int reverse(int n)
{
    int d,r=0;

    while(n!=0)
    {
        d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    return r;
}

int main()
{
    int n,digit,temp,d,c=0,check=0,count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a single digit to check if it is in %d: ",n);
    scanf("%d", &digit);

    if(!(digit>=0 && digit<=9))
    {
        printf("Invalid digit input! %d is not a single digit",digit);
        return 0;
    }

    temp = reverse(n);
    
    while(temp!=0)
    {
        d=temp%10;
        c++;
        if(d==digit)
        {
            printf("%d exists at position %d number digit\n", digit,c);
            check=1;
            count++;
        }
        temp=temp/10;
    }

    if(check==0)
        printf("No, %d is not present in the number %d", digit,n);
    else
        printf("Yes, %d exists in the number %d, %d number of times", digit,n,count);

    return 0;
}