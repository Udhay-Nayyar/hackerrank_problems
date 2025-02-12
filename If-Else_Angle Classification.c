#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y;
    scanf("%d",&x);
     if(x%360==0 && x!=0){
        printf("Full Rotation");
    }
    else if(x==0){
        printf("Acute Angle");
        return 0;
    }
    else{
        if(x>360){
            y=x/360;
            if(x<90+y*360 && x>=0+y*360){
                printf("Acute Angle");
            }
            else if(x==90+y*360){
                printf("Right Angle");
            }
            else if(x>90+y*360 && x<180+y*360){
                printf("Obtuse Angle");
            }
            else if(x==180+y*360){
                printf("Straight Angle");
            }
            else if(x>180+y*360 && x<360+y*360){
                printf("Reflex Angle");
            }
        }
        else{
            if(x<90 && x>0){
                printf("Acute Angle");
            }
            else if(x==90){
                printf("Right Angle");
            }
            else if(x>90 && x<180){
                printf("Obtuse Angle");
            }
            else if(x==180){
                printf("Straight Angle");
            }
            else if(x>180 && x<360){
                printf("Reflex Angle");
            }
            
        }
    }   
    
    return 0;
}
