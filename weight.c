#include <stdio.h>
#include <cs50.h>

int main (void)
{

    int weight_digits = get_int("what is your weight?");

    int johannes = 152;

        if(weight_digits == johannes)
            {

            printf("You are so buff, muscular, and manly!\n");

            } 
            else if (weight_digits > johannes)
            {
                printf ("You're fat! Shaped like an iceburg!\n");

            }
                else
                { 
                    printf("Poor guy... skinny... just a pile of bones... with no muscle!\n");
                }
        
}