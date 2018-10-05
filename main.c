#include <stdio.h>
int pyramidNums(){
    int n ;
    printf("Please enter the numbers of floors for the pyramid:\n");
    scanf("%d",&n);
    int i  , c =1 , j=n , updCount=n;
    while(c<=n){
        while(j!=1){
            printf(" ");
            j--;
        }
        i = c ;
        if(c>=1) {
            while (i != 1) {
                printf("%d", i);
                i--;
            }
            while (i!= c+1){
                printf("%d", i);
                i++;
            }
        }
        printf("\n");
        c++;
        updCount--;
        j=updCount;
    }
}
int main() {
    pyramidNums();
}