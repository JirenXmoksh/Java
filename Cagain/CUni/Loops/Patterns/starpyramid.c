#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    int nsp = n-1;
    int nst = 1;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=nsp; j++){
            printf("_ ");
        }
        //nsp--;
        for(int k=1; k<=nst; k++){
            printf("* ");
        }
       // nst+=2;
        printf("\n");
        if(i>=n){
            nsp++;
            nst-=2;
        }
        else{
            nsp--;
            nst+=2;
        }
    }
    return 0;
}