#include<stdio.h>
#include<math.h>
int factorial( int p){
    int fact=1;
    for(int i=1;i<=p;i++){
        fact=fact*i;
    }
    return fact;

}
int main(){
    int r;
    printf("Enter the value of r:");
    scanf("%d",&r);
    float m;
    printf("Enter the value of mean (m):");
    scanf("%f",&m);
    float e=2.71828;
    float a=pow(e,-m);
    float b=pow(m,r);
    int c=factorial(r);
    float f=(a*b)/c;
    printf("The poission distribution for the random variable %d is %f",r,f);
}