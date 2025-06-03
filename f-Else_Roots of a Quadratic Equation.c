#include<stdio.h>
#include<math.h>
int main() {
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    float d=(b*b-4*a*c);
    float root_1=(-b+sqrt(d))/(2.0*a);
    float root_2=(-b-sqrt(d))/(2.0*a);
    if(d>0) {
        printf("Roots: %.2f, %.2f\n",root_1,root_2);
        printf("Type: Real and Distinct");
    }
    else if(d<0) {
        float x=-(b)/(2.0*a);
        d=(4*a*c - (b*b));
        float y=(sqrt(d))/(2.0*a);
        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n",x,y,x,y);
        printf("Type: Complex");
    }
    else {
        printf("Roots: %.2f, %.2f\n",root_1,root_2);
        printf("Type: Real and Equal");
    }
}
