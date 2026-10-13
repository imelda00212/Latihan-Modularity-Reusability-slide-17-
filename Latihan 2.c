
#include <stdio.h>
float angka1, angka2;

float tambah() {
    return angka1 + angka2;
}

float kurang() {
    return angka1 - angka2;
}

float kali() {
    return angka1 * angka2;
}

float bagi() {
    return angka1 / angka2;
}

int main() {
    float hasil;
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
            hasil = tambah();
            printf("Hasil = %.2f\n", hasil);
        }
        else if (operasi == '-') {
            hasil = kurang();
            printf("Hasil = %.2f\n", hasil);
        }
        else if (operasi == 'x' || operasi == 'X' || operasi == '*') {
            hasil = kali();
            printf("Hasil = %.2f\n", hasil);
        }
        else if (operasi == '/') {
            if (angka2 != 0) {
                hasil = bagi();
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
