#include <stdio.h>

int main(){
    int n, m; scanf("%d %d", &n, &m);

    int v[n+5][m+5];
    // for(int i=0; i<=m; i++) v[0][i] = 0;
    // for(int i=0; i<=n; i++) v[i][0] = 0;

    for(int i=1; i<=n; i++) for(int j=1; j<=m; j++){
        scanf("%d", &v[i][j]);
        // v[i][j] += v[i-1][j] + v[i][j-1] - v[i-1][j-1];
    }
    // printf("\n");
    //     for(int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         printf("%d ", v[i][j]);
    //     }printf("\n");
    // }

    int xa1, xa2, ya1, ya2, xb1, xb2, yb1, yb2; scanf("%d %d %d %d %d %d %d %d", &xa1, &ya1, &xa2, &ya2, &xb1, &yb1, &xb2, &yb2);

    int res=0;
    for(; xa1<=xa2; xa1++) for(int tmp=ya1; tmp<=ya2; tmp++){
        res += v[xa1][tmp];
        // printf("%d ", res);
        v[xa1][tmp] = 0;
    }

    // printf("%d\n", res);

    for(; xb1<=xb2; xb1++) for(int tmp=yb1; tmp<=yb2; tmp++){
        res += v[xb1][tmp];
    }

    printf("%d\n", res);
}
