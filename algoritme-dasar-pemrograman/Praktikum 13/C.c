#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    int kond = 1;
    while(1 < 2){
        ch = getchar();
        if(ch == EOF) break;
        if(isspace(ch)){
            kond = 1;
        }else{
            if(kond){
                ch = toupper(ch);
                kond = 0;
            }
        }

        printf("%c", ch);
    }
}