#include <stdio.h>

int main() {
    int unit;
    float res;
    scanf("%d",&unit);
    if(unit<=100 && unit>0){
         res= unit*5;
        
        
    }
    else if(unit>100 && unit<=300){
         res= (unit-100)*7+ 100*5;
        
        
    }
    else if(unit>300){
         res=(unit-300)*10+200*7+100*5;
        
        
    }
    else  if(unit==0){
        res=0;
    }
    else{
        printf("Invalid Input!");
        res=-10;
    }
    
    
     
    if(res<=1200 && res>=0){
        res=res-(10*res)/100;
        printf("The electricity bill is: %.2f.",res);
    }
    else if(res>1200){
        printf("The electricity bill is: %.2f.",res);
    }
    
    
    
    
        
    
    return 0;
}