#include <stdio.h>

int main() {
    int N,i,c;
    scanf("%d %d",&N,&i);
    c=((N>>i)&1);
    if(c==0){
        printf("0");
    }
    else{
        printf("1");
    }
    return 0;
}