 #include<stdio.h>
int main()
{
    int p1,p2,p3,p4,p5;
    scanf("%d%d%d%d%d",&p1,&p2,&p3,&p4,&p5);
    if(p1>=35&&p2>=35&&p3>=35&&p4>=35&&p5>=35)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}