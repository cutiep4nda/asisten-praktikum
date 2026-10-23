#include <stdio.h>

int main(){
    char s[15];
    scanf("%s", s);
    int id=0, sum=0;
    while(s[id]){
        sum += (s[id]-'0');
        id++;
    }
    sum--;
    if(sum%3 == 0 && (s[id-1] == '6' || s[id-1] == '1')){
        printf("TEMPE DAN PISGOR\n");
        return 0;
    }
    if(sum%3 == 0){
        printf("TEMPE\n");
        return 0;
    }
    if(s[id-1] == '6' || s[id-1] == '1'){
        printf("PISGOR\n");
        return 0;
    }
    printf("KOSONG\n");
    return 0;
}