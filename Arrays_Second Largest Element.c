#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<=n-1; ++i)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n-2;++i)
    {
        for(int j=0;j<=n-2-i;++j)
        {
            if(a[j]<a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
//     for(int i=0;i<=n-1;++i){
//         printf("%d ",a[i]);
//     }
    int min=a[0];
    for(int i=1;i<=n-1;++i){
        if(min!=a[i]){
            printf("%d",a[i]);
            return 0;
        }
    }
    printf("-1");
}
