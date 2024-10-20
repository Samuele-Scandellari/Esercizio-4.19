#include <stdio.h>
int main() {
    int i;
    int n;
    int primo=0;
    printf("Inserisci un numero da verificare che sia primo: ");
    scanf("%d", &n);
    for(i=2; i<n; i++) {
        if(n%i==0) {
            primo=1;
        }
    }
    if(primo==1) {
        printf("Il numero inserito non e' primo");
    } else {
        printf("Il numero inserito e' primo");
    }
}