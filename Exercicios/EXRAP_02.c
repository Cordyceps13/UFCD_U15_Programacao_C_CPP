#include <stdio.h>

/**
 * The main function of the program. 
 It recursively calls itself until the static variable `i` 
 reaches 0, printing the current value of `i` on each iteration.
 */
int main(){


    static int i = 2;

    if(i--){
        printf("%d\n", i);

        main();
    }

    return 0;
}