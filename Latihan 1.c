
#include <stdio.h>

float tambah(float a, float b) {
    return a + b;
}

float kurang(float a, float b) {
    return a - b;
}

float kali(float a, float b) {
    return a * b;
}

float bagi(float a, float b) {
    return a / b;
}

int main() {
    float angka1, angka2, hasil;
    char operasi;

    do {
        printf("\n===== KALKULATOR =====\n");
        printf("Masukkan bilangan pertama: ");
        scanf("%f", &angka1);

        printf("Masukkan bilangan kedua: ");
        scanf("%f", &angka2);

        printf("\nPilih operasi (+, -, x, /)\n");
        printf("Ketik q untuk keluar\n");
        printf("Operasi: ");
        scanf(" %c", &operasi);

        if (operasi == '+') {
            hasil = tambah(angka1, angka2);
            printf("Hasil = %.2f\n", hasil);
        }
        else if (operasi == '-') {
            hasil = kurang(angka1, angka2);
            printf("Hasil = %.2f\n", hasil);
        }
        else if (operasi == 'x' || operasi == 'X' || operasi == '*') {
            hasil = kali(angka1, angka2);
            printf("Hasil = %.2f\n", hasil);
        }
        else if (operasi == '/') {
            if (angka2 != 0) {
                hasil = bagi(angka1, angka2);
                printf("Hasil = %.2f\n", hasil);
            }
            else {
                printf("Error: bilangan tidak bisa dibagi 0.\n");
            }
        }
        else if (operasi == 'q' || operasi == 'Q') {
            printf("Program selesai.\n");
        }
        else {
            printf("Operasi tidak valid.\n");
        }

    } while (operasi != 'q' && operasi != 'Q');

    return 0;
}
