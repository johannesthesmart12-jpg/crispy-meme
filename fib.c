// print out the first 10 fibanacii numbers
#include <stdio.h>

int main(void){
    int diff = 0;
    int n = 1;
   
    for (int i = 0; i < 10; i++){
        int sum =  diff + n;
        printf ("%d \n", sum);
        diff = n;
        n = sum;
    }

}