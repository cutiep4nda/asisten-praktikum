#include <stdio.h>

int main(){
    unsigned long long n, q; scanf("%llu %llu", &n, &q);
    unsigned long long a[n+1];
    a[0] = 0;
    for(int i=1; i<=n; i++){
        scanf("%lld", &a[i]);
        a[i] += a[i-1];
    }
    // for(int i=1; i<=n; i++){
    //     printf("%d ", a[i]);
    // }
    // printf("\n");
    while(q--){
        unsigned long long l, r;
        scanf("%llu %llu", &l, &r);
        printf("%.2lf\n", ((double)(a[r]-a[l-1])/(double)(r-(l-1))));
    }
}