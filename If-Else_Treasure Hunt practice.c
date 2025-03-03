
#include <stdio.h>

int main()
{
    int num1,num2,num3,num4;
    scanf("%d ",&num1);
    if(num1==1){
        printf("Player chooses the Left path.\n");
        scanf("%d",&num2);
        if(num2==1){
            printf("Poor choice, Game Over!\n");
        }
        else if(num2==2){
            printf("Player found a bridge.\n");
            scanf("%d",&num3);
            if(num3==1){
                printf("Player crosses the bridge safely.\n");
                scanf("%d",&num4);
                if(num4==3){
                    
                printf("Congratulations!! You won the treasure.\n");
                }
                else if(num4==1){
                    printf("All that glitters is not gold, Game Over!\n");
                    
                }
                else if(num4==2){
                    printf("All your efforts were for nothing, Game Over!\n");
                }
                
                
            }
            else if(num3==2){
                printf("Poor luck, Game Over!\n");
            }
            
        }
        
    }
    else if(num1==2){
        printf("Player chooses the Middle path.\n");
        scanf("%d",&num2);
        if(num2==1){
            
        printf("Player solved the puzzle.\n");
        }
        else if(num2==2){
            printf("Foolish player, Game Over!\n");
        }
    }
    else if(num1==3){
        printf("Player chooses the Right path\n");
        scanf("%d",&num2);
        if(num2==1){
            printf("Player solved the puzzle.\n");
        }
        else{
            printf("Foolish player, Game Over!\n");
        }
        scanf("%d",&num3);
        if(num3==1){
            printf("All that glitters is not gold, Game Over!\n");
        }
        else if(num3==2){
            printf("All your efforts were for nothing, Game Over!\n");
        }
        else if(num3==3){
            printf("Congratulations!! You won the treasure.\n");
        }
        
    }
  
    return 0;
}
