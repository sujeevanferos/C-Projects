#include <stdio.h>

int findmax(int x, int y){

    /*if (x > y){
        return x;
    }

    else{
        return y;
    }*/

   //we can replace the above quoted lines with a single line ====>
   //(condition) ? value_it_true : value_if_false

   return(x > y) ? x : y;

}


int main(){

    int max = findmax(4,5);
    printf("%d\n", max);
    return 0;

}