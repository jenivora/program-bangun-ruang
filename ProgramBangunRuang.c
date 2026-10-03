#include <stdio.h>
#include <math.h>
 
#define PHI 3.14159265358979323846

static void tampilkan_header_kelompok(void)
{
    printf("============================================================================\n");
    printf("              PROGRAM PRAKTIKUM PEMROGRAMAN - MODUL 1\n");
    printf("============================================================================\n");

    printf("ANGGOTA KELOMPOK:\n");
    printf("1. I Gede Wirasatya Diputra             (260530911075)\n");
    printf("2. Sang Made Ananta Wirya               (260530911062)\n");
    printf("3. Ni Komang Listya Amanda Setyawati    (260530911066)\n");
    printf("4. Putu Devin Sukayasa Anggenta         (260530911087)\n");
    printf("5. Gde Hari Wiguna Putra                (2505551121)\n");
    printf("6. Jenifer                              (260530911140)\n");

    printf("\nASISTEN DOSEN:\n");
    printf("Ni Kadek Marshita Widya Andini          (2505551048)\n");

    printf("============================================================================\n");
}

double volumeTabung(double r, double t) {
    return PHI * r * r * t;
}

double luasPermukaanTabung(double r, double t) {
    return 2 * PHI * r * (r + t);
}

double volumeBola(double r) {
    return (4.0 / 3.0) * PHI * r * r * r;
}
 
double luasPermukaanBola(double r) {
    return 4 * PHI * r * r;
}
 
double volumeKerucut(double r, double t) {
    return (1.0 / 3.0) * PHI * r * r * t;
}
 
double luasPermukaanKerucut(double r, double t) {
    double s = sqrt((r * r) + (t * t));
    return PHI * r * (r + s);
}

static void tampilkanMenu() {
    printf("\n=== PROGRAM HITUNG VOLUME & LUAS PERMUKAAN ===\n");
    printf("1. Tabung\n");
    printf("2. Bola\n");
    printf("3. Kerucut\n");
    printf("4. Keluar\n");
    printf("Pilih menu (1-4): ");
}

int main() {
        int pilihan;
    double r, t;
    double volume, luas;

  tampilkan_header_kelompok();

    do {
        tampilkanMenu();
        scanf("%d", &pilihan);
 
        switch (pilihan) {
            case 1: 
                printf("\n--- TABUNG ---\n");
                printf("Masukkan jari-jari (r): ");
                scanf("%lf", &r);
                printf("Masukkan tinggi (t)   : ");
                scanf("%lf", &t);
 
                volume = volumeTabung(r, t);
                luas   = luasPermukaanTabung(r, t);
 
                printf("\nHasil Perhitungan Tabung:\n");
                printf("Volume         = %.2f\n", volume);
                printf("Luas Permukaan = %.2f\n", luas);
                break;
 
            case 2: 
                printf("\n--- BOLA ---\n");
                printf("Masukkan jari-jari (r): ");
                scanf("%lf", &r);
 
                volume = volumeBola(r);
                luas   = luasPermukaanBola(r);
 
                printf("\nHasil Perhitungan Bola:\n");
                printf("Volume         = %.2f\n", volume);
                printf("Luas Permukaan = %.2f\n", luas);
                break;
 
            case 3: 
                printf("\n--- KERUCUT ---\n");
                printf("Masukkan jari-jari (r): ");
                scanf("%lf", &r);
                printf("Masukkan tinggi (t)   : ");
                scanf("%lf", &t);
 
                volume = volumeKerucut(r, t);
                luas   = luasPermukaanKerucut(r, t);
 
                printf("\nHasil Perhitungan Kerucut:\n");
                printf("Volume         = %.2f\n", volume);
                printf("Luas Permukaan = %.2f\n", luas);
                break;
 
            case 4:
                printf("\nProgram selesai. Terima kasih\n");
                break;
 
            default:
                printf("\nPilihan tidak valid! Silakan pilih 1-4.\n");
        }
 
    } while (pilihan != 4);
 
    return 0;
}