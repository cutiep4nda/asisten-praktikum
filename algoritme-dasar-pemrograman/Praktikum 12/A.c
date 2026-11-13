#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a1 = malloc(1*sizeof(int));
    int cnt1=1;

    int *a2 = malloc(1*sizeof(int));
    int cnt2=1;

    int inp;
    scanf("%d", &inp);
    while(inp != -9){
        a1[cnt1-1] = inp;
        cnt1++;

        a1 = realloc(a1, cnt1*sizeof(int));
        scanf("%d", &inp);
    }

    // getchar();



    scanf("%d", &inp);
    while(inp != -9){
        a2[cnt2-1] = inp;
        cnt2++;

        a2 = realloc(a2, cnt2*sizeof(int));

        scanf("%d", &inp);
    }

    // for(int i=0; i<cnt1-1; i++) printf("%d ", a1[i]);
    // printf("\n");
    // for(int i=0; i<cnt2-1; i++) printf("%d ", a2[i]);


    int *ans = malloc((cnt1+cnt2-2)*sizeof(int));

    int i=0, j=0, p=0;
    while(i < cnt1-1 && j < cnt2-1){
        if(a1[i] < a2[j]) 
            ans[p++] = a1[i++];
        else
            ans[p++] = a2[j++];
    }

    while(i < cnt1-1) ans[p++] = a1[i++];

    while(j < cnt2-1) ans[p++] = a2[j++];

    for(i=0; i<p; i++) printf("%d ", ans[i]);
}