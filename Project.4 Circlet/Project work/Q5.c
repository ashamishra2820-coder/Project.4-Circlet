// qestion 5 : Write a program to print Full pyramid Pattern:
//            5 
//          4 5 4 
//        3 4 5 4 3       /*Full pyramid Pattern*/
//      2 3 4 5 4 3 2 
//    1 2 3 4 5 4 3 2 1



       #include<stdio.h>

int main(){

    for(int i=5; i>=1; i--)
    {

        // spaces
        for(int s=1; s<=i-1; s++)
        {
            printf("  ");
        }

        // increasing numbers
        for(int j=i; j<=5; j++)
        {
            printf("%d ", j);
        }

        // decreasing numbers
        for(int j=4; j>=i; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}