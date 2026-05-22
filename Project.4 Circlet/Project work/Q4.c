// qestion 4 : Write a program to print inverted left half angle Pattern:
// 1 0 1 0 1
//    1 0 1 0
//       1 0 1                          /*Inverted Left Half Angle Pattern*/
//          1 0
//             1


#include<stdio.h>

int main(){

    for(int i=5; i>=1; i--)
    {

        // spaces
        for(int s=1; s<=(5-i)*3; s++)
        {
            printf(" ");
        }

        // 1 0 pattern
        for(int j=1; j<=i; j++)
        {
            if(j%2==1)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }

        printf("\n");
    }

    return 0;
}