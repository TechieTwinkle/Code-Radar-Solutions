#include <stdio.h>

char*Welcome(){
    return"Welcome to Code Radar!";
}
int main(){
    char a;
    scan("%c",&a);
    print("ASCII Value: %d",a);
    return 0;
}