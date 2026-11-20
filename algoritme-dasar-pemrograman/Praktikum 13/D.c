#include <stdio.h>
#include <ctype.h>

int main(){
    char c1, c2; scanf("%c %c", &c1, &c2);
    getchar();
    c1 = tolower(c1);
    c2 = tolower(c2);

    char ch;
    while(1 < 2){
        ch = getchar();
        if(ch == EOF) break;
        if(ch == c1) ch = c2;
        else if(ch-'A'+'a' == c1) ch = c2-'a'+'A';
        printf("%c", ch);
    }
}