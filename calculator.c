#include<stdio.h>
int main()
{

printf("Simple Calculator\n");
float a=10, b=2;
float res;
printf("Enter any two number\n");
scanf("%f %f",&a,&b);
printf("Entered Number is: %d and %d\n",a,b);
res=a+b;
printf("sum of two no is: %f\n", res);
res=a-b;
printf("sub of two no is: %f\n", res);
res=a*b;
printf("mul of two no is: %f\n", res);
res=a/b;
printf("div of two no is: %f\n", res);

return 0;
}

