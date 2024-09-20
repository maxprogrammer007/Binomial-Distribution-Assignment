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
    int n,r;
    float p,q;
    printf("Enter the probability of success:\n");
    scanf("%f",&p);
    printf("The probability of success is:%f\n",p);
    q=1-p;
    printf("The probability of failure is:%f\n",q);
    printf("Enter the total number of sample space:\n");
    scanf("%d",&n);
    printf("Enter the value of random variable:\n");
    scanf("%d",&r);
    float a=pow(p,r);
    float b=pow(q,(n-r));
    int c=factorial(n);
    int d=factorial(r);
    int e=factorial(n-r);
    float pro=(c/(d*e))*a*b;
    printf("The probability of required random variable is:%f",pro);
   
}