#include <stdio.h>
int main(){
    char ac;
    scanf("%c",&ac);
    if(ac>='A' && ac<='Z'){
        printf("Uppercase");
    }else if(ac>='a'&& ac<='z'){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}