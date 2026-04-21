/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 02 - DATA MANIPULATION AND EXTERNAL FILES
 *   Hari dan Tanggal    : Selasa, 21 April 2026
 *   Nama (NIM)          : Murtadha Al-Askari (13224048)
 *   Nama File           : Panjang_Kata.c
 *   Deskripsi           : Menampilkan panjang string
 * 
 */

 #include <stdio.h>
 #include <string.h>
 int main() {
    char character[9999];
    char hasil[9999];
    int count = 0;
    int j = 0;
    scanf("%s", &character);
    int len = strlen(character);
    for (int i = 0; i<len; i++) {
        if (character[i] == '(') {
            int character_ketemu = 0;
            int temp_count = 1;
            for (int k = i + 1; i<len; k++) {
                if (character[k] == '(') {
                    temp_count++;
                }
                if (character[k] == ')') {
                    temp_count--;
                }
                if (temp_count == 0) {
                    character_ketemu = 1;
                    break;
                }
            }
            if (character_ketemu) {
                count++;
                hasil[j++] = character[i];
            }
        } else if (character[i] == ')') {
            if (count > 0) {
                count--;
                hasil[j++] = character[i];
            }
        } else {
            hasil[j++] = character[i];
        }
    }
    printf("%s", hasil);
    return 0;
}
