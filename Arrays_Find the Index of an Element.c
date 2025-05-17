#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0;i<=n-1;++i){
        if(target==a[i]){
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
