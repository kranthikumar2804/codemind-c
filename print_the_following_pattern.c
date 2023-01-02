 #include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    k=n+64;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",k);
        }
        k--;
        printf("
");
    }
    return 0;
}