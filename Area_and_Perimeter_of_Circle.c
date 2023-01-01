#include<stdio.h>
void circle()
{
    int r;
    scanf("%d",&r);
    float ar=3.14*r*r;
    float pr=2*3.14*r;
    printf("%.2f
%.2f",ar,pr);
}
int main()
{
    circle();
}