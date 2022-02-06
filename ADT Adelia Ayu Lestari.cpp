#include <stdio.h>
#include <conio.h>

struct {
float Luas;
float Volume;
float Panjang;
float Lebar;
float Tinggi;
} balok; 

void luasBalok(){ 
balok.luas = 2 * balok.panjang * balok.lebar + 2 * balok.panjang * balok.tinggi + 2 * balok.lebar * balok.tinggi;
printf("Luas Balok = %f",balok.luas);
}

float volumeBalok(float j){
return balok.panjang * balok.lebar * balok.tinggi;
}

int main(){
printf("panjang = ");scanf("%f", &balok.panjang);
printf("lebar = ");scanf("%f", &balok.lebar);
printf("tinggi = ");scanf("%f", &balok.tinggi);

luasBalok();

balok.volume = volumeBalok(balok.tinggi);

printf("Volume Balok = %f",balok.volume);
getch();
}
