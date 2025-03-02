#include <stdio.h>

int main() {
    int b,setbit0,setbit1,setbit2,setbit3,res;
    scanf("%d",&b);
    setbit0=b&1;
    setbit1=(b>>1)&1;
    setbit2=(b>>2)&1;
    setbit3=(b>>3)&1;
    res=setbit0+setbit1+setbit2+setbit3;
    printf("%d",res);
    return 0;
}