#include <stdio.h>
#define int long long

signed main(){
    int n, m; scanf("%lld %lld", &n, &m);
    int v[n+5][m+5];
    for(int i=0; i<=m; i++) v[0][i] = 0;
    for(int i=0; i<=n; i++) v[i][0] = 0;

    for(int i=1; i<=n; i++) for(int j=1; j<=m; j++){
        scanf("%lld", &v[i][j]);
        v[i][j] += v[i-1][j] + v[i][j-1] - v[i-1][j-1];
    }


    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         printf("%d ", v[i][j]);
    //     }printf("\n");
    // }

    int xa1, xa2, ya1, ya2, xb1, xb2, yb1, yb2; scanf("%lld %lld %lld %lld %lld %lld %lld %lld", &xa1, &ya1, &xa2, &ya2, &xb1, &yb1, &xb2, &yb2);
    int xs1 = xa1, xs2 = xa2, ys1 = ya1, ys2 = ya2;

    if(xa1 < xb1) xs1 = xb1;
    if(ya1 < yb1) ys1 = yb1;

    if(xa2 > xb2) xs2 = xb2;
    if(ya2 > yb2) ys2 = yb2;

    int min = 0;
    if(xs1 <= xs2 && ys1 <= ys2) min = v[xs2][ys2] - v[xs2][ys1-1] - v[xs1-1][ys2] + v[xs1-1][ys1-1];

    int res = v[xa2][ya2]-v[xa2][ya1-1]-v[xa1-1][ya2]+v[xa1-1][ya1-1];

    res += v[xb2][yb2]-v[xb2][yb1-1]-v[xb1-1][yb2]+v[xb1-1][yb1-1];

    // printf("%d %d %d %d %d\n", xs1, ys1, xs2, ys2, res);
    printf("%lld\n", res - min);
}