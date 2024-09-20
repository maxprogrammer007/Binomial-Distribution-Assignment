#include<stdio.h>
#include<math.h>
int main(){
    int x;
    float m,s,p;
    float pi=3.141,e=2.7183;
    printf("Enter the value of mean:");
    scanf("%f",&m);
    printf("Enter the value of standard deviation:");
    scanf("%f",&s);
    printf("Enter the value of random variable:");
    scanf("%d",&x);
    float a=pow(e,-0.5*((x-m)/s)*((x-m)/s));
    float b=pow(2*pi, 1/2);
    p=(1/(s*b))*a;
    printf("The normal distribution for given random variable is %f",p);
}