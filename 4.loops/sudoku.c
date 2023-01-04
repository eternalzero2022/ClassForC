#include <stdio.h>
int main()
{
    int arr[10][10]={0};
    int i=0;

    for(i=0;i<9;i++)
    {
        int j=0;
        for(j=0;j<9;j++)
        {
            scanf("%d",&arr[i][j]);



        }
        getchar();
    }





    int test[10]={0};

    for(i=0;i<9;i++)
    {
        int a=0;
        for(a=0;a<9;a++)
            test[a+1]=0;

        for(a=0;a<9;a++)
        {



            test[arr[i][a]]++;



        }
        for(a=0;a<9;a++)
        {


        }
        for(a=0;a<9;a++)
        {

            if(test[a+1]!=1)
            {

                goto fail;
            }
        }
    }
    for(i=0;i<9;i++)
    {
        int a=0;
        for(a=0;a<9;a++)
            test[a+1]=0;

        for(a=0;a<9;a++)
        {
            test[arr[a][i]]++;
        }
        for(a=0;a<9;a++)
        {
            if(test[a+1]!=1)
            {

                goto fail;
            }
        }
    }

    for(i=1;i<=7;i+=3)
    {
        int j=1;

        for(j=1;j<=7;j+=3)
        {
            int a=0;
            for(a=1;a<=9;a++)
            {
                test[a]=0;
            }
            test[arr[i-1][j-1]]++;
            test[arr[i-1][j]]++;
            test[arr[i-1][j+1]]++;
            test[arr[i][j]]++;
            test[arr[i][j-1]]++;
            test[arr[i][j+1]]++;
            test[arr[i+1][j-1]]++;
            test[arr[i+1][j]]++;
            test[arr[i+1][j+1]]++;
            for(a=1;a<=9;a++)
            {
                if(test[a]!=1)
                {

                    goto fail;
                }
            }



        }
    }













    printf("YES");
    return 0;



    fail:
    printf("NO");
    return 0;
}