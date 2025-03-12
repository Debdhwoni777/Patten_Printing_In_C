#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
        int nst = n/2;
        int nsp = 1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=nsp; j++){
                printf(" ");
            }
            for(int k=1; k<=nst; k++){
                printf("*");
            }
            nsp--;
            nst+=2;                //02:55:45
            printf("\n");
        }

    return 0;
}