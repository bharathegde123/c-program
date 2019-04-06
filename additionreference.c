#include<stdio.h>
void input(int *a,int *b)
{    
     printf("enter the valuse");
     scanf("%d%d",a,b);
        
}
int compute(int a,int b)
{
    int c;
    c=a+b;
    return c;

}

void output(int a,int b, int *c)
{
    printf("%d+%d=%d",a,b,*c);

}
int main()
{   
     int a,b,c;
     input (&a,&b);
     c=compute(a,b);
     output(a,b,&c);
     return 0;


}
