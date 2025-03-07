#include <stdio.h>

int main() {

   int a;
    scanf("%d",&a);
    if(a==0){
       printf("No"); 
    }
    else if((a&(a-1))==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
