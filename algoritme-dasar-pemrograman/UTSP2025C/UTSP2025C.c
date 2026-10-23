#include <stdio.h>

int main(){
    int n, s, res=0; scanf("%d %d", &n, &s);
    int a[n+1];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);

    for(int i=0; i<n-1; i++){
        int val = a[i]+s;

        // printf("nilai val : %d", val);
        // int l=i+1, r=n-1;
        // while(l <= r){
        //     int md = (l+r)/2;
        //     if(val < a[md]){
        //         r = md-1;
        //     }else if(val > a[md]){
        //         l = md+1;
        //     }else{
        //         res++;
        //         break;
        //     }
        // }

        for(int j=i+1; j<n; j++){
            if(a[j] > val) break;
            else if(a[j] == val) res++;
        }

        // val = a[i]-s;
        // l=0; r=i-1;
        // while(l <= r){
        //     int md = (l+r)/2;
        //     if(val < a[md]){
        //         r = md-1;
        //     }else if(val > a[md]){
        //         l = md+1;
        //     }else{
        //         res++;
        //         break;
        //     }
        // }
    }

    printf("%d\n", res);
}