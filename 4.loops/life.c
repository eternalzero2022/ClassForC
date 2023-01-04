#include <stdio.h>
#include <string.h>


int main()
{
    char arr[1006]={0};
    char mem[1006]={0};


    int n=0;
    scanf("%d",&n);
    getchar();
    int i=0;

    scanf("%s",arr);
    int len=strlen(arr);


    for(i=0;i<n;i++)//整体循环
    {
        int j=0;
        for(j=0;arr[j]!='\0';j++)//每一个元素进行判断
        {
            int numA=0,numB=0;
            int num=0;
            for(num=-3;num<=-1;num++)
            {
                if(j+num<=len-1&&j+num>=0)
                {
                    switch(arr[j+num])
                    {
                        case '.':break;
                        case 'A':numA++;break;
                        case 'B':numB++;break;
                    }
                }
            }
            for(num=1;num<=3;num++)
            {
                if(j+num<=len-1&&j+num>=0)
                {
                    switch(arr[j+num])
                    {
                        case '.':break;
                        case 'A':numA++;break;
                        case 'B':numB++;break;
                    }
                }
            }




            if(arr[j]=='.')
            {
                if(numA>=2&&numA<=4&&numB==0)
                    mem[j]='A';
                else if(numB>=2&&numB<=4&&numA==0)
                    mem[j]='B';
                else
                    mem[j]='.';
            }
            else if(arr[j]=='A')
            {

                if(numB>=1||numA<=1||numA>=5)
                {
                    mem[j]='.';}
                else
                {
                    mem[j]='A';
                }

            }
            else if(arr[j]=='B')
            {
                if(numA>=1||numB<=1||numB>=5)
                    mem[j]='.';
                else
                {
                    mem[j]='B';
                }

            }


        }


        strncpy(arr,mem,len+1);


    }



    printf("%s",arr);
    return 0;
}