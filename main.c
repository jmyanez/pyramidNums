
/*This program will prompt for an input n and will print a pyramid of
 * height n with those numbers.
 * This program is Lab 3 for the class CS 1320 given by Dr Urenda
 * Made by Jose M Yanez on 10/04/2018 :)
*/

#include <stdio.h>
int pyramidNums(){
    int n ;
    printf("Please enter the numbers of floors for the pyramid:\n");
    scanf("%d",&n);
    int i  , c =1 , j=n , updCount=n;
    //This while loop will print the spaces to give shape to the pyramid
    while(c<=n){
        while(j!=1){
            printf(" ");
            j--;
        }
        i = c ;
        if(c>=1) {
    //This while prints the left side of the pyramid
            while (i != 1) {
                printf("%d", i);
                i--;
            }
    //This while prints the right side of the pyramids
            while (i!= c+1){
                printf("%d", i);
                i++;
            }
        }
    //Print end of the line and update counters
        printf("\n");
        c++;
        updCount--;
        j=updCount;
    }
}
int main() {
    //Call pyramidNums function 
    pyramidNums();
}