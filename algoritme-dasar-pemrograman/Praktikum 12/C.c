#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n; scanf("%d %d", &n, &m);
    long long *a = malloc(((n+3)*(m+3))*sizeof(long long));

    m++;
    for(int i=0; i<=m; i++) *(a+i) = 0;
    for(int i=0; i<=n+1; i++) *(a+i*m) = 0;

    // for(int i=0; i<=n; i++){
    //     for(int j=1; j<=m; j++) printf("%lld ", *(a+j+i*m));
    //     printf("\n");
    // }

    
    for(int i=1; i<=n; i++){
        for(int j=1; j<m; j++){
            scanf("%lld", (a+j+i*m));
            *(a+j+i*m) += *(a+j-1+i*m) + *(a+j+(i-1)*m) - *(a+j-1+(i-1)*m);
        }
    }

    // for(int i=0; i<=n; i++){
    //     for(int j=0; j<m; j++) printf("%lld ", *(a+j+i*m));
    //     printf("\n");
    // }

    int q, a1, b1, a2, b2; scanf("%d", &q);
    while(q--){
        scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
        printf("%lld\n", *(a+b2+a2*m) - *(a+b1-1+a2*m) - *(a+b2+(a1-1)*m) + *(a+b1-1+(a1-1)*m));
    }
}