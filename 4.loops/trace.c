#include <stdio.h>

int main()
{
    int n=0,m=0,x=0,y=0;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    getchar();

    char board[52][52]={0};
    int i=0;
    int j=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%c",&board[i][j]);

        }
        getchar();
    }



    int count=0;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(board[i][j]=='#')
                count++;
        }

    }
    printf("%d\n",count);



    while(1)
    {
        printf("%d %d\n",x,y);
        board[x][y]='_';
        int vector[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
        int k=0;
        int jg=0;
        for(k=0;k<4;k++)
        {
            if(board[x+vector[k][0]][y+vector[k][1]]=='#')
            {
                x+=vector[k][0];
                y+=vector[k][1];
                jg=1;
                break;
            }

        }
        if(!jg)
            return 0;

    }





}