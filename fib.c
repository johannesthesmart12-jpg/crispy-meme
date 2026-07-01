// print out the first 10 fibanacii numbers
#include <stdio.h>

int main(void){
    int fart = 0;
    int butt = 1;
   
    for (int i = 0; i < 10; i++){
        int jawline = fart + butt;
        printf ("%d \n", jawline);
        fart = butt;
        butt = jawline;
    }

}