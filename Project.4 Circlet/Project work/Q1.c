// qestion 1: Write a program to print Right Half Angle Pattern:
//41
//41 42
//41 42 43                  /*Right Half Angle Pattern*/
//41 42 43 44
//41 42 43 44 45


#include<stdio.h>

int main(){

    for(int i=41; i<=45; i++){

        for(int j=41; j<=i; j++){

            printf("%d ", j);
            
        }

     printf("\n");

    }

    return 0;
}























