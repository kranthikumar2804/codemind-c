 #include<stdio.h>
int main()
{
    float b,g,da,hra;
    scanf("%f",&b);
    if(b<=10000)
    {
        da=b*0.8;
        hra=b*0.2;
    }
    else if(b<=20000)
    {
        da=b*0.9;
        hra=b*0.25;
    }
    else
    {
        da=b*0.95;
        hra=b*0.3;
    }
    g=b+hra+da;
    printf("%.2f",g);
    return 0;
}