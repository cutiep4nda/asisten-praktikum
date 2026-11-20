#include <stdio.h>
#include <stdlib.h>

int main(){
    // char inp[10000005];
    // fgets(inp, 10000005, stdin);
    int a[30];
    for(int i=0; i<30; i++) a[i] = 0;
    // for(int i=0; inp[i] != '\0'; i++){
    //     if(inp[i] >= 'A' && inp[i] <= 'Z') inp[i] = inp[i] - 'A' + 'a';
    //     if(inp[i] >= 'a' && inp[i] <= 'z') a[inp[i]-'a']++;
    // }
    char ch;
    while(1 < 2){
        ch = getchar();
        if(ch == EOF) break;

        if(ch >= 'A' && ch <= 'Z') ch = ch-'A'+'a';
        a[ch-'a']++;
    }

    for(int i=0; i<26; i++){
        if(a[i] > 0) printf("%c %d\n", (char)(i+'a'), a[i]);
    }
}