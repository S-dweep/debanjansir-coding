#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#define MAX 100

int top=-1,stack[MAX];

int push(int item)
{
    if(top==MAX-1)
    {
        printf("Stack Overflow.\n");
    }
    else
    {
        top++;
        stack[top]=item;
    }
}

int pop()
{
    if(top==-1)
    {
        printf("Stack Underflow.\n");
        return -1;
    }
    else
    {
        int item=stack[top];
        top--;
        return item;
    }
}

int isOperator(char sym)
{
    if(sym=='+'||sym=='-'||sym=='*'||sym=='/'||sym=='%'||sym=='^')
        return 1;
    else
        return 0;
}

int evaluate(char *exp)
{
    int i=0;
    char sym=exp[i];
    int b,a,res;
    while(sym!='\0')
    {
        if(sym>='0' && sym<='9')
        {
            int num=sym-'0';
            push(num);
        }
        if(isOperator(sym))
        {
            a=pop();
            b=pop();
            switch(sym)
            {
            case '+':
                res=b+a;
                break;
            case '-':
                res=b-a;
                break;
            case '*':
                res=b*a;
                break;
            case '/':
                res=b/a;
                break;
            case '%':
                res=b%a;
                break;
            case '^':
                res=b^a;
                break;
            }
            push(res);
        }
        i++;
        sym=exp[i];
    }
    res=pop();
    return res;
}

int main()
{
    char exp[1000];
    printf("Enter postfix expression: ");
    gets(exp);
    int res=evaluate(exp);
    printf("Result: %d",res);
    return 0;
}
