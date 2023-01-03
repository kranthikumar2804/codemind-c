 #include<stdio.h>
int main()
{
    float a,b,c,sum=0;
    scanf("%f%f%f",&a,&b,&c);
    if(a>b&&a>c)
    {
        sum=((b+c)>a);
    }
    else if(b>c)
    {
        sum=((a+c)>b);
    }
    else
    {
        sum=((a+b)>c);
    }

    if(sum)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }
    return 0;
}