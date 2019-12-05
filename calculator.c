#include<stdio.h>
int main()
{

printf("Simple Calculator\n");
float a, b;
float res;
printf("Enter any two number\n");
scanf("%f %f",&a,&b);
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

