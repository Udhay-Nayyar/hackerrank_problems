#include <stdio.h>

int main() {
    int labyrinth_entrance;
    scanf("%d",&labyrinth_entrance);
    int path_a,path_b,treasure,puzzel_sol;
    int score=0;
    
    switch(labyrinth_entrance){
        case 1: printf("Player chooses the Left path.\n");
                scanf("%d",&path_a);

            if(path_a==1){
                printf("Poor choice, Game Over!\n");
            }
            else if(path_a==2){
                printf("Player found a bridge.\n");
                    scanf("%d",&path_b);

                if(path_b==1){
                    printf("Player crosses the bridge safely.\n");
                    score=1;
                }
                else if(path_b==2){
                    printf("Poor luck, Game Over!\n");
                }
            }
            break;
        case 2:printf("Player chooses the Middle path.\n");
            scanf("%d",&puzzel_sol);
        if(puzzel_sol==582) {
            printf("Player solved the puzzle.\n");
            score=1;
        }
        else {
            printf("Foolish player, Game Over!\n");
        }

            break;
            
        case 3:printf("Player chooses the Right path.\n");  
            scanf("%d",&puzzel_sol);
        if(puzzel_sol==30) {
            printf("Player solved the puzzle.\n");
            score=1;
        }
        else {
            printf("Foolish player, Game Over!\n");
        }
    
    }
    if(score==1){
        scanf("%d",&treasure);
        if(treasure==1){
            printf("All that glitters is not gold, Game Over!");
        }
        else if(treasure==2){
            printf("All your efforts were for nothing, Game Over!");
        }
        else if(treasure==3){
            printf("Congratulations!! You won the treasure.");
        }
    }
    return 0;
}