#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int key=0;
    for(int i=0;i<=n-1;++i){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n-2;++i)
    {
        if(a[i]>a[i+1]){
            key=1;
            break;
        }
    }
    if(key==0){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}
