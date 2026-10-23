#include <stdio.h>

int main(){
    int n, t; scanf("%d %d", &n, &t);
    int tmp, res=0;
    while(n--){
        scanf("%d", &tmp);
        if(tmp >= t) res++;
    }
    printf("%d\n", res);
}