#include <stdio.h>
#include <string.h>

void evaluasi_string(char string1[], char string2[]) {
    
    if (strlen(string1) != strlen(string2)) {
        printf("BERBEDA\n");
    }
    
    else if (strcmp(string1, string2) == 0) {
        printf("IDENTIK\n");
    }
    
    else {
        printf("MIRIP\n");
    }
}

int main() {
    char string1[101], string2[101];

    // Masukkan string pertama di sini:
    strcpy(string1, "hello"); 

    // Masukkan string kedua di sini:
    strcpy(string2, "hallo"); 

    // Evaluasi string dan keluarkan hasil
    evaluasi_string(string1, string2);

    return 0;
}
