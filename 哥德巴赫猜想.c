#include <stdio.h>
#include <math.h>
#include <string.h>
int isPrime(int num){
    if(num < 2)  return 0;
    if(num == 2) return 1;
    if(num % 2 == 0) return 0;
    for(int i = 3; i <= sqrt(num); i += 2){
        if(num % i == 0) return 0;
    }
    return 1;
}


int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    for (int e = 4; e<=N; e+=2){
        for (int i = 2; i <= e; i++){
            if(isPrime(i) && isPrime(e-i)){
                printf("%d=%d+%d\n", e, i, e-i);
                break;
            }
        }
    }
    return 0;
} 

    

