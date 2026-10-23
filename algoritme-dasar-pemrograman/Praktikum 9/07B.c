#include <stdio.h>
#include <math.h>

int main(){
    int t; scanf("%d", &t);
    while(t--){
        long long n; scanf("%lld", &n);

        long long ak = 0;
        while(ak*ak <= n) ak++;

        ak--;
        long long l=0, r=ak;
        int res=0;
        for(; l <= r; ){
            if((l*l + r*r) < n){
                l++;
                continue;
            }
            if((l*l + r*r) > n){
                r--;
                continue;
            }
            if((l*l + r*r) == n){
                res=1;
                break;
            }
        }

        if(res) printf("Y");
        else printf("N");
    }
}