/**********************************************
   pset1 of cs50

   mario.c

   Author: Marco Solano Salas, makod3v@gmail.com

 **********************************************/

#include <cs50.h>
#include <stdio.h>

int main(void) {
        // variables
        int pyramidHeight = 0;
        char pyramidBlock;
        char space;

        do {    // ask user for input
                printf("Please enter an integer between 1 and 23 = ");
                pyramidHeight = GetInt();

                // prompt message for invalid input
                if (pyramidHeight == 0) {
                        printf("Zero is no valid, try again please! \n");
                        return 0;
                }
        } while (pyramidHeight < 1 || pyramidHeight > 23);

        for(int i = 0; i < pyramidHeight; i++)
        {
                // Print spaces
                for(int space = 0; space < pyramidHeight -i-1; space++)
                {
                        printf(" ");

                }
                // Print character.
                for(int pyramidBlock = 0; pyramidBlock < i+2; pyramidBlock++)
                {
                        printf("#");
                }
                printf("\n");
        }
        return 0;
}
