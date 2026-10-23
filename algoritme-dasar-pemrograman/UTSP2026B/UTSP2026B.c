#include <stdio.h>

int main(){
    long long total = 0, maks=0, id, tmp;
    for(int i=0; i<7; i++){
        scanf("%lld", &tmp);
        total += tmp;
        if(tmp > maks){
            maks = tmp;
            id = i;
        }
    }
    printf("%.2lf\n%lld\n", (double)total/7, maks);
    printf((id == 0) ? "Minggu" : (id == 1) ? "Senin" : (id == 2) ? "Selasa" : (id == 3) ? "Rabu" : (id == 4) ? "Kamis" : (id == 5) ? "Jumat" : (id == 6) ? "Sabtu" : "None");
    printf("\n");
}