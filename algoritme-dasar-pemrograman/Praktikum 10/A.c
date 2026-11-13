#include <stdio.h>

int main(){
    int m, n; scanf("%d %d", &m, &n);
    int arr[m+5][n+5], res[m+5][n+5];
    for(int i=0; i<=m; i++) arr[i][0] = 0;
    for(int i=0; i<=n; i++) arr[0][i] = 0;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            scanf("%d", &arr[i][j]);
            res[i][j] = arr[i][j] - (arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1]);
        }
    }

    int b, k;
    while(1 < 2){
        scanf("%d", &b);
        if(b == -9) return 0;
        scanf("%d", &k);

        printf("%d ", res[b][k]);
    }
}