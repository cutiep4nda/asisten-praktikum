#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    int ar[n+5];
    for(int i=0; i<n; i++) scanf("%d", &ar[i]);

    int *p = ar;
    int cnt=1;
    while(*p != 1){
        // printf("%d\n", *p);
        p = &ar[*p-1];
        cnt++;
    }

    printf("%d\n", cnt);
}