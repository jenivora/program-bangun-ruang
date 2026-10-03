#include <stdio.h>

static void tampilkan_header_kelompok(void)
{
    printf("+---------------------------------------------------+\n");
    printf("|          PROGRAM PRAKTIKUM PEMROGRAMAN - MODUL 1   |\n");
    printf("+---------------------------------------------------+\n");
    printf("| ANGGOTA KELOMPOK:                                  |\n");
    printf("| 1. I Gede Wirasatya Diputra     (260530911075)     |\n");
    printf("| 2. Sang Made Ananta Wirya       (260530911062)     |\n");
    printf("| 3. Ni Komang Listya Amanda Setyawati (260530911066)|\n");
    printf("| 4. Putu Devin Sukayasa Anggenta (260530911087)     |\n");
    printf("| 5. Gde Hari Wiguna Putra        (2505551121)       |\n");
    printf("| 6. Jenifer                      (260530911140)     |\n");
    printf("|                                                     |\n");
    printf("| ASISTEN DOSEN:                                     |\n");
    printf("| Ni Kadek Marshita Widya Andini  (2505551048)       |\n");
    printf("+---------------------------------------------------+\n");
}

float konversiCelsiusKeFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float konversiCelsiusKeKelvin(float celsius) {
    return celsius + 273.15;
}

int main() {
    tampilkan_header_kelompok();

    float celsius, fahrenheit, kelvin;

    printf("Masukkan suhu dalam Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = konversiCelsiusKeFahrenheit(celsius);
    kelvin = konversiCelsiusKeKelvin(celsius);

    printf("Suhu %.2f C = %.2f F\n", celsius, fahrenheit);
    printf("Suhu %.2f C = %.2f K\n", celsius, kelvin);

    return 0;
}