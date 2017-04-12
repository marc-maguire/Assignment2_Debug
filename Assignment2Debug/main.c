//
//  main.c
//  Assignment2Debug
//
//  Created by Marc Maguire on 2017-04-12.
//  Copyright © 2017 Marc Maguire. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char play;
    int choice;
    //choice is returned as a int, not a char
    char answer[] = "No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n";
    //moved answer[] declaration up to be with other declarations - not sure if that is normal in C,
    //added empty array to declaration
    int gameLoop = 1;
    int timesPlayed = 0;
    
    while (gameLoop == 1){
        
        if (timesPlayed == 0) {
            //allow game to seem intelligent and track / respond differently for first game loop vs second
            printf("Welcome to Two doors.\n");
            printf("Would you like to play? (y/n):");
            while ((play = getchar()) != 'y' && play != 'n')
            {
                printf("Please answer 'y' or 'n' to proceed:\n");
                // clean the buffer from mess
                while (getchar() != '\n');
            }
            
        } else {
            printf("Would you like to play again? (y/n):");
            while ((play = getchar()) != 'y' && play != 'n')
            {
                printf("Please answer 'y' or 'n' to proceed:\n");
                // clean the buffer from mess
                while (getchar() != '\n');
            }
            
        }
        
        if (play == 'y') {
            // == instead of =
            printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
            printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
            printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
            printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
            printf("What do you ask so you can pick the door to freedom?\n\n");
            printf("\t1.Ask the truth-guard to point to the door of doom.\n");
            printf("\t2.Ask the liar-guard to point to the door of doom.\n");
            printf("\t3.Doesn't matter which one you pick.\n");
            //added 'f' to end of each print declaration
            scanf(" %d", &choice);
            while (getchar() != '\n');
            //added f to end of scan declaration
            //missing '&' before variables that the scan updates
            //added while(getchar() != to clear the input buffer so that incorrect double answers don't impact the result
            
            switch (choice) {
                    
                case 1:
                    printf("%s", answer);
                    timesPlayed++;
                    //missing % beside each variable reference
                    //then changed from %c to %s to represent the string that is stored in the answer var
                    break;
                case 2:
                    printf("%s", answer);
                    timesPlayed++;
                    //missing % beside each variable reference
                    //then changed from %c to %s to represent the string that is stored in the answer var
                    break;
                case 3:
                    printf("%s", answer);
                    timesPlayed++;
                    //missing % beside each variable reference
                    //then changed from %c to %s to represent the string that is stored in the answer var
                    break;
                default:
                    printf("The Troll Smasher comes out from the shadows and squeezes the stupid out of you until you pop. GAME OVER!\n");
                    break;
            }
        } else {
            printf("Sorry to hear that, we at Two Doors hope you have a super duper day!\n");
            gameLoop = 0;
            break;
        }
    }
    return 0;
    //why is it returning 1? changed to 0
}

