#include <stdio.h>

int main(){
    int n, a, b; scanf("%d %d %d", &n, &a, &b);

    long long res=0, d;
    while(n--){
        scanf("%lld", &d);
        if(d%a == 0) res += d;
        if(d%b == 0) res -= d;
    }
    if(res < 0) res *= -1;
    printf("%lld\n", res);
}