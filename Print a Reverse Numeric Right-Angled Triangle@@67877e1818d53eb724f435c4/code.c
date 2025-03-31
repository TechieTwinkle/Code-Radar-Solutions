#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            printf("%d",k);
        }
        for(int j=0;j<=n-i-1;j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}