#include<stdio.h>
void input(int *num1,int *num2,int *den1,int *den2)
{
    printf("enter the num1 num2 den1 den2");
    scanf("%d%d%d%d",num1,num2,den1,den2);
    

}
int process1(int den1,int den2)
{   
    if(den1==0||den2==0) 
    return den1;   
}
int process2(int num1,int num2,int den1,int den2,int *denans)
{       int numans=1;
      numans=(num1*den2)+(num2*den1);
      *denans=(den1*den2);
      return numans;
}
void output(int numans,int denans)
{
    printf("ans=%d/%d",numans,denans);
    
}
int main()
{    int k;
     int num1,num2,den1,den2,denans,numans;
     input(&num1,&num2,&den1,&den2);
     k=process1(den1,den2);
     if(k==0)
    {
        printf("invalid input");

    }
   
    else
    { 
            numans=process2(num1,num2,den1,den2,&denans);
            output(numans,denans);
    }
    return 0;

}

