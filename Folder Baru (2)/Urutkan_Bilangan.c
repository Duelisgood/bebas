#include <stdio.h>
#include <stdlib.h>

// Fungsi pembanding untuk qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    
    // Input jumlah nilai N
    scanf("%d", &N);
    
    // Membuat array untuk menyimpan nilai-nilai
    int nilai[N];
    
    // Input nilai-nilai
    for(int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }
    
    // Mengurutkan array nilai menggunakan qsort
    qsort(nilai, N, sizeof(int), compare);
    
    // Output nilai yang sudah terurut
    for(int i = 0; i < N; i++) {
        printf("%d\n", nilai[i]);
    }
    
    return 0;
}
