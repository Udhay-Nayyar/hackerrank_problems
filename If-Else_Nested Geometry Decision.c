#include <stdio.h>

int main() {
    int n,a,b,c,d,A,B,C,D;
        scanf("%d",&n);
    
    if(n==0){
        printf("Circle");
    }
    else if(n==3){
        scanf("%d %d %d %d %d %d",&a,&b,&c,&A,&B,&C);
        if(a+b>c && b+c>a && a+c>b && A+B+C==180 && a>0 && b>0 && c>0 && A>0 && B>0 && C>0){
            if(a==b && b==c && a==c && A==60 && B==60 && C==60){
                printf("Equilateral Triangle");
            }
            else if((a==b && A==B && B!=C && b!=c) || (b==c && B==C && C!=A && c!=a) || (a==c && A==C && C!=B && c!=b)){
                printf("Isosceles Triangle");
            }
            else if(a!=b && b!=c && a!=c && A!=B && B!=C && A!=C){
                printf("Scalene Triangle");
            }
            else{
               printf("Invalid Figure"); 
            }
            
        }
        else{
            printf("Invalid Figure");
        }
    }
    
    else if(n==4){
        scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&A,&B,&C,&D);
        if(A+B+C+D==360 && a>0 && b>0 && c>0 && d>0 && A>0 && B>0 && C>0 && D>0 && a+b+c>d && b+c+d>a && c+d+a>b && d+a+b>c){
            if(a==b && b==c && c==d && A==90 && B==90 && C==90 && D==90){
                printf("Square");
            }
            else if(a==c && b==d && a!=b && c!=d && A==90 && B==90 && C==90 && D==90){
                printf("Rectangle");
            }
            else if(a==c && b==d && A==C &&!(A==90 && B==90 && C==90 && D==90) &&  B==D && a!=b && c!=d){
                printf("Parallelogram");
            }
            else if(a==b &&  b==c && c==d && !(A==90 && B==90 && C==90 && D==90) && A==C && B==D){
                printf("Rhombus");
            }
            else{
               printf("Invalid Figure"); 
            }
        }
        else{
            printf("Invalid Figure");
        }
    }
    
    
    else{
        printf("Invalid Figure"); 
    }
    

    return 0;
}