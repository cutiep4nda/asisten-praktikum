#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; scanf("%d", &n);
    long long *a = malloc((n+5)*sizeof(long long));

    a[0] = 0;
    for(int i=1; i<=n; i++) {
        scanf("%lld", (a+i));
        a[i] += a[i-1];
    }

    int l, r;
    while(1 < 2){
        scanf("%d", &l);
        if(l == -9) return 0;
        scanf("%d", &r);

        printf("%lld\n", a[r]-a[l-1]);
    }
}