#include <stdio.h>
    int isPrime(int num){
        int i,count=0;
        for(i=1,i<=num,i++){
            if(n%i==0)
            count++;
        }
        return count;
    }
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}