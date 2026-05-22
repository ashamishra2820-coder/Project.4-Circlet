// qestion 2 : Write a program to print Floyd's Triangle Pattern:
//11
//12 13
//14 15 16              /*Floyd's Triangle Pattern*/
//17 18 19 20


#include<stdio.h>

int main(){

    int n = 11;

    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ", n++);
        }

        printf("\n");
    }

    return 0;
}