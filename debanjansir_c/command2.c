#include<stdio.h>
void main(int argc,char *argv[])
{
    if(argc<2)
        printf("Insufficient argument");
    else
    {
        int i,l;
        l=atoi(argv[1]);
        for(i=2;i<argc;i++)
        {
            if(atoi(argv[i])>l)
                l=atoi(argv[i]);
        }
        printf("Largest: %d",l);
    }
}
