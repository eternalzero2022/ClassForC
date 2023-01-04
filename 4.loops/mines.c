#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    getchar();
    char board[103][103]={0};
    int i=1,j=1;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
            scanf("%c",&board[i][j]);
        }
        getchar();
    }




    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(board[i][j]=='*')
            {
                ;
            }
            else
            {
                int vector[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
                int k=0;
                int count=0;
                for(k=0;k<8;k++)
                {
                    int ni=i+vector[k][0];
                    int nj=j+vector[k][1];
                    if(board[ni][nj]=='*')
                    {
                        count++;
                    }
                    board[i][j]=count+48;
                }
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c",board[i][j]);
        }
        printf("\n");
    }




    return 0;
}