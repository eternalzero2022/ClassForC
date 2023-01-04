#include <stdio.h>

int main()
{

    int m=0,n=0,p=0;
    scanf("%d%d%d",&m,&n,&p);
    getchar();
    int arr1[100][100]={0};
    int arr2[100][100]={0};
    int arr3[100][100]={0};
    int i=0;
    int j=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        getchar();
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        getchar();
    }



    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            int i1=0,sum=0;
            for(i1=0;i1<n;i1++)
            {
                sum+=arr1[i][i1]*arr2[i1][j];
            }
            arr3[i][j]=sum;

        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }







    return 0;
}