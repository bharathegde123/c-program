#include<stdio.h>
void inut(int *a,int*b,int *c)
{
    printf("enter three numbers ");
    scanf("%d%d%d",a,b,c);

}
int compute(int a,int b,int c)
{
   if(a<b)
   {if(a<c)
   small=a;
   }
  if(c<a)
  {if(c<b)
  small=c;
  }
   if(b<a)
   {if(b<c)
   small=c;
   }
return(small);

}
void output(int c)
{
    printf("smallest is %d",c);

}

int main()
{
     int a,b,c;
     input(&a,&b,&c);
     c=compute(a,b,c);
     output();


}
