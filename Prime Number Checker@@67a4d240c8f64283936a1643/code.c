#include <stdio.h>
    int isPrime(int t){
        int i,count=0;
        for(i=1,i<=t,i++){
            if(n%i==0)
            count++;
        }
        return count;
    }
int main(){
    int t;
    scanf("%d",&t);
    fact_count=isPrime(t)
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}