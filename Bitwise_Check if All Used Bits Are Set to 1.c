#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    if(N==0){
        printf("No");
    }
    else if( (N & N+1) == 0){
        printf("Yes");
    }
    else if(  (N & N+1) != 0){
        printf("No");
    }
    else if(N<0){
        N=-N;
     if( (N & N+1) == 0){
        printf("Yes");
    }
    else if(  (N & N+1) != 0){
        printf("No");
    }  
    }
    return 0;
}