#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    int a[n+5], cnt=0;
    for(int i=0; i<n; i++) scanf("%d", &a[i]);

    for(int i=0; i<n; i++){
        long long sum=0;
        for(int j=i; j<n; j++){
            sum += a[j];
            if(sum > 47) break;
            else if(sum == 47) cnt++;
        }
    }

    printf("%d\n", cnt);
}