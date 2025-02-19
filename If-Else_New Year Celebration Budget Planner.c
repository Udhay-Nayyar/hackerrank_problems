#include <stdio.h>

int main() {
    int budget,numGuests,foodCostPerGuest,decorationCost;
    int musicCost,extraExpenses;
    scanf("%d",&budget);
    scanf("%d",&numGuests);
    scanf("%d",&foodCostPerGuest);
    scanf("%d",&decorationCost);
    scanf("%d",&musicCost);
    scanf("%d",&extraExpenses);
    
    if(((numGuests*foodCostPerGuest)+decorationCost+musicCost+extraExpenses)<=budget){
        if(numGuests>5 && numGuests<=50){
            if(decorationCost<((30)*budget)/100 || foodCostPerGuest*numGuests<((50)*budget)/100){
                if(numGuests>25){
                    if(musicCost>0){
                        printf("Celebration Approved");
                    }
                    else{
                        printf("Celebration Denied");
                    }
                }
                else{
                    printf("Celebration Approved");
                }
            }
            else{
               printf("Celebration Denied"); 
            }
        }
        else{
            printf("Celebration Denied");
        }
    }
    else{
        printf("Celebration Denied");
    }
    
    return 0;
}