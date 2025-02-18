#include <stdio.h>
int main(){
    char ac;
    scanf("%c",&ac);
    if(al>='A'&& al<='Z'){
        printf("Uppercase");
    }else if(al>='a'&&al<='z'){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}