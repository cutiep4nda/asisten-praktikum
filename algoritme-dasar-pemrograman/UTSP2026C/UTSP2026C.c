#include <stdio.h>

int main(){
    int n, q; scanf("%d %d", &n, &q);
    long long ps[n+1];
    ps[0] = 0;
    for(int i=1; i<=n; i++){
        scanf("%lld", &ps[i]);
        ps[i] += ps[i-1];
    }
    int a, b;
    while(q--){
        scanf("%d %d", &a, &b);
        printf("Hari ke %d-%d: %.2lf\n", a, b, (double)(ps[b]-ps[a-1])/(b-a+1));
    }
}