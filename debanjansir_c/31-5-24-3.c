#include <stdio.h>
int reverse(char *s1, char *s2, int n)
{
    if (s[p] != s[n - p - 1])
        return 0;
    return palindrome(s, n, p + 1);
}
int main()
{
    int i, j;
    char s1[1000], s2[1000];
    gets(s1);
    gets(s2);
    for (i = 0; s1[i] != '\0'; i++);
    for (j = 0; s2[j] != '\0'; j++);
    if (i == j)
    {
        if (reverse(s1, s2, i) == 1)
            printf("YES");
        else
            printf("NO");
    }
    else
    {
        printf("NO");
    }
    return 0;
}