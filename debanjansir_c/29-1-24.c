
#include<stdio.h>
int c;
void towerOfhanoi(int n,char beg,char end,char mid)
{
    if(n==1)
    {
        printf("Move disk 1 from %c to %c.\n",beg,end);
        c++;
        return ;
    }
    else
    {
        towerOfhanoi(n-1,beg,mid,end);
        printf("Move disk %d from %c to %c.\n",n,beg,end);
        c++;
        towerOfhanoi(n-1,mid,end,beg);
    }

}
int main()
{
    int n;
    printf("Enter no. of disks: ");
    scanf("%d",&n);
    towerOfhanoi(n,'A','C','B');
    printf("Total no. of steps: %d",c);
    return 0;
}
