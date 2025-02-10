#include<stdio.h>
int main(){
    float income;
    scanf("%f",&income);
    float res,res1,res2;
    res=0;
    res1=(5*250000)/100;
    res2=(20*500000)/100; 
    
    if(income>=0){
        if(income<=250000){
        printf("%.2f",res);
    }
        
        else if(income>250000 && income<=500000){
        res=((5*(income-250000))/100);
        printf("%.2f",res);
            
    }
    else if(income>500000 && income<=1000000){
        res=((20*(income-500000))/100+res1);
        printf("%.2f",res);
            
    }
    else if(income>1000000){
        res=((30*(income-1000000))/100+res1+res2);
        printf("%.2f",res);
            
    }
    }
    
    
    
    else{
        printf("INVALID");
    }

    
    
    
}