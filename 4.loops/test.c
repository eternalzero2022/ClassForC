#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i=rand()%2;
    if(i==0)
        printf("chabaidao");
    else
        printf("guming");
    return 0;
}