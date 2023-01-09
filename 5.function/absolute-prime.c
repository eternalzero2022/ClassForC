#include <stdio.h>
#include <math.h>

int is_prime(int a)
{

    for (int i = 2; i <= sqrt(a + 0.5); i++) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int reverse(int a)
{
    int i=0;
    int digit=1;
    int dgt[5]={0};
    for(i=0;;i++)
    {
        dgt[i]=a%10;
        if(!(a/10))
            break;
        digit++;
        a/=10;
    }
    int sum=0;
    int digitcpy=digit;

    for(i=0;digit>0;digit--,i++)
    {
        sum+=dgt[i]*pow(10,digit-1);
    }
    return sum;
}


int main()
{

    int n=0;
    int i=0;
    int sum=1;
    scanf("%d",&n);
    if(n<=1)
    {
        printf("0");
        return 0;
    }
    for(i=3;i<=n;i++)
    {
        if(is_prime(i)&&is_prime(reverse(i)))
            sum++;
    }
    printf("%d",sum);
    return 0;
}