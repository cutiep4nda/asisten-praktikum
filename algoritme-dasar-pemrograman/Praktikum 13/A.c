#include <stdio.h>

int main(){
    int n; scanf("%d", &n); getchar();
    char c1=getchar(), c2=getchar(), c3=getchar();
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(j == 1 && i != n) printf("%c", c1);
            else if(j == i) printf("%c", c3);
            else if(i == n) printf("%c", c2);
            else printf(" ");
        }
        printf("\n");
    }
}