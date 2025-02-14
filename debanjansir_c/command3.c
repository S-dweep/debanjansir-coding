#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
    if(argc<2)
        printf("Insufficient arguments");
    else
    {
        int i,l,sl;
        l=atoi(argv[1]);
        sl=atoi(argv[1]);
        for(i=2;i<argc;i++)
        {
            if(atoi(argv[i])>l)
            {
                sl=l;
                l=atoi(argv[i]);
            }
            if(atoi(argv[i])<l && atoi(argv[i])>sl)
            {
                sl=atoi(argv[i]);
            }
        }
        printf("Second largest: %d",sl);
    }
}

