#include <stdio.h>
    int main()
    {
        int n,con1,con2,con3;
        scanf("%d",&n);
        con1=(n%2==0 && n>10);
        con2=(n>15 && n%3==0);
        con3=(n%7==0);
        if(n>=1){
        if(con1 && con2 && con3) {
            printf("The verdict for the number %d is: SUPERNATURAL",n);
        }
        else if(!con1 && !con2 && !con3 ) {
            printf("The verdict for the number %d is: NORMAL",n);
        }
        else if((!con1 && !con2 && con3) || (con1 && !con2 && !con3) || (!con1 && con2 && !con3)) {
            printf("The verdict for the number %d is: MAGICAL",n);
        }
        else if((!con1 && con2 && con3) || (con1 && !con2 && con3) || (con1 && con2 && !con3)) {
            printf("The verdict for the number %d is: MIRACULOUS",n);
        }
        }
        else{
            printf("The verdict for the number %d is: INVALID",n);
        }
        return 0;
    }    

