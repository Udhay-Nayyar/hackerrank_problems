#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
        if(n%2!=0){
            printf("1");
        }
    else{
        if((n&(n-1))==0){
            printf("%d",n);
        }
        else{
            printf("%d",n&(-n));
        }
    }
    
    return 0;
}