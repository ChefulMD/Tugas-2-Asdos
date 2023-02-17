#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

float a,b,c,d,e,f;
int jwb;
char ulang;

void KeyC(){
    printf("\nPress any key to continue....");
    getch();
}

void inputangka(){
    system("cls");
    printf("Masukkan angka pertama : ");
    scanf(" %f",&a);
    printf("Masukkan angka kedua : ");
    scanf(" %f",&b);
}
void pilihmenu(){
    printf("\n Pilih menu : ");
    scanf(" %d", &jwb);
    system("cls");
}
void KaliBagiTambahKurang(){
    system("cls");
    printf("\n\n ================\n Kali Bagi Tambah Kurang\n ================\n");
    printf("    1. Perkalian\n    2. Pembagian\n    3. Penjumlahan\n    4. Pengurangan\n    5. Menu utama\n ================");
    pilihmenu(0);
    switch(jwb){
    case 1:
        kali:
        inputangka(0);
        printf("Hasil dari %.2f * %.2f adalah = %.2f",a ,b,a*b);
        KeyC(0);

        ulangkali :
        printf("\ningin mengulang perkalian(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto kali;}else if(ulang == 'n'|| ulang == 'N'){KaliBagiTambahKurang(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangkali;};
        break;
    case 2:
        bagi:
        inputangka(0);
        printf("Hasil dari %.2f / %.2f adalah = %.2f",a ,b,a/b);
        KeyC(0);

        ulangbagi :
        printf("\ningin mengulang pembagian(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto bagi;}else if(ulang == 'n'|| ulang == 'N'){KaliBagiTambahKurang(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangbagi;};
        break;
    case 3:
        tambah:
        inputangka(0);
        printf("Hasil dari %.2f + %.2f adalah = %.2f",a ,b,a+b);
        KeyC(0);

        ulangtambah :
        printf("\ningin mengulang pertambahan(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto tambah;}else if(ulang == 'n'|| ulang == 'N'){KaliBagiTambahKurang(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangtambah;};
        break;
    case 4 :
        kurang:
        inputangka(0);
        printf("Hasil dari %.2f - %.2f adalah = %.2f",a ,b,a-b);
        KeyC(0);

        ulangkurang:
        printf("\ningin mengulang pengurangan(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto kurang;}else if(ulang == 'n'|| ulang == 'N'){KaliBagiTambahKurang(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangkurang;};
        break;
    case 5 :
        main();
    default :
        printf("Menu tidak tersedia...\n(press any key to continue...)");getch();system("cls");
        KaliBagiTambahKurang(0);
    }



}

void SinCosTan(){
    system("cls");
    printf("\n\n ================\n Kali Bagi Tambah Kurang\n ================\n");
    printf("    1. Sinus\n    2. Cosinus\n    3. Tangen\n    4. Menu utama\n ================");
    pilihmenu(0);
    switch(jwb){
    case 1 :
        sin :
        system("cls");
        printf("Masukkan derajat sinus : ");scanf(" %f",&a);
        printf("Hasil sinus adalah = %.2f",sin(a * 0.0175));
        KeyC(0);

        ulangsin :
        printf("\ningin mengulang Sinus(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto sin;}else if(ulang == 'n'|| ulang == 'N'){SinCosTan(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangsin;};
        break;
    case 2 :
        cos :
        system("cls");
        printf("Masukkan derajat Cosinus : ");scanf(" %f",&a);
        printf("Hasil Cosinus adalah = %.2f",cos(a * 0.0175));
        KeyC(0);

        ulangcos :
        printf("\ningin mengulang Cosinus(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto cos;}else if(ulang == 'n'|| ulang == 'N'){SinCosTan(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangcos;};
        break;
    case 3 :
        tan :
        system("cls");
        printf("Masukkan derajat Tangen : ");scanf(" %f",&a);
        printf("Hasil Tangen adalah = %.2f",tan(a * 0.0175));
        KeyC(0);

        ulangtan :
        printf("\ningin mengulang Tangen(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto tan;}else if(ulang == 'n'|| ulang == 'N'){SinCosTan(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangtan;};
        break;
    case 4 :
        main();
    default :
        printf("Menu tidak tersedia...\n(press any key to continue...)");getch();system("cls");
        SinCosTan(0);

    }


}

void KelilingBangunDatar(){
    system("cls");
    printf("\n\n ================\n Keliling Bangun Datar\n ================\n");
    printf("    1. Keliling Persegi\n    2. Keliling Trapesium\n    3. Keliling Layang-Layang\n    4. Keliling Lingkaran\n    5. Menu Sebelumnya\n ================");
    pilihmenu(0);
    switch(jwb){
    case 1 :
        Kpersegi :
        system("cls");
        printf("Masukkan Panjang Persegi : ");scanf(" %f",&a);
        printf("Masukkan Lebar Persegi : ");scanf(" %f",&b);
        printf("Keliling Persegi Adalah = %0.2f",(a * 2)+(b * 2));
        KeyC(0);

        ulangKpersegi :
        printf("\ningin mengulang Keliling Persegi(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto Kpersegi;}else if(ulang == 'n'|| ulang == 'N'){KelilingBangunDatar(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangKpersegi;};
        break;
    case 2 :
        Ktrapesium :
        system("cls");
        printf("Masukkan Sisi Atas Trapesium Sama Kaki : ");scanf(" %f",&a);
        printf("Masukkan Sisi Bawah Trapesium Sama Kaki : ");scanf(" %f",&b);
        printf("Masukkan Sisi Miring Trapesium Sama Kaki : ");scanf(" %f",&c);
        printf("Keliling Trapesium Sama Kaki adalah = %.2f",a + b + (c * 2));
        KeyC(0);

        ulangKtrapesium :
        printf("\ningin mengulang Keliling Trapesium(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto Ktrapesium;}else if(ulang == 'n'|| ulang == 'N'){KelilingBangunDatar(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangKtrapesium;};
        break;
    case 3 :
        Klayang :
        system("cls");
        printf("Masukkan Panjang Sisi Atas : ");scanf(" %f",&a);
        printf("Masukkan Panjang Sisi Bawah : ");scanf(" %f",&b);
        printf("Keliling Layang-Layang adalah = %.2f",(a * 2)+(b * 2));
        KeyC(0);

        ulangKlayang :
        printf("\ningin mengulang Keliling Layang-Layang(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto Klayang;}else if(ulang == 'n'|| ulang == 'N'){KelilingBangunDatar(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangKlayang;};
        break;
    case 4 :
        Klingkaran :
        system("cls");
        printf("Masukkan Panjang Diameter : ");scanf(" %f",&a);
        printf("Masukkan Panjang Jari-Jari : ");scanf(" %f",&b);
        printf("Keliling Lingkaran berdasar jari-jari = %.2f",3.14 * b *2);
        printf("\nKeliling Lingkaran berdasar Diameter = %.2f",3.14 * a);
        KeyC(0);

        ulangKlingkaran :
        printf("\ningin mengulang Keliling Lingkaran(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto Klingkaran;}else if(ulang == 'n'|| ulang == 'N'){KelilingBangunDatar(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangKlingkaran;};
        break;
    case 5 :
        KelilingLuasVolume(0);
    default :
        printf("Menu tidak tersedia...\n(press any key to continue...)");getch();system("cls");
        KelilingBangunDatar(0);
    }
}

void LuasBangunDatar(){
    system("cls");
    printf("\n\n ================\n Luas Bangun Datar\n ================\n");
    printf("    1. Luas Persegi\n    2. Luas Trapesium\n    3. Luas Layang-Layang\n    4. Luas Lingkaran\n    5. Menu Sebelumnya\n ================");
    pilihmenu(0);
    switch(jwb){
    case 1 :
        Lpersegi :
        system("cls");
        printf("Masukkan Panjang Persegi : ");scanf(" %f",&a);
        printf("Masukkan Lebar Persegi : ");scanf(" %f",&b);
        printf("Luas Persegi Adalah = %.2f",a * b);
        KeyC(0);

        ulangLpersegi :
        printf("\ningin mengulang Luas Persegi(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto Lpersegi;}else if(ulang == 'n'|| ulang == 'N'){LuasBangunDatar(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangLpersegi;};
        break;
    case 2 :
        Ltrapesium :
        system("cls");
        printf("Masukkan Sisi Atas Trapesium Sama Kaki : ");scanf(" %f",&a);
        printf("Masukkan Sisi Bawah Trapesium Sama Kaki : ");scanf(" %f",&b);
        printf("Masukkan Sisi Tinggi Trapesium Sama Kaki : ");scanf(" %f",&c);
        printf("LuasTrapesium Sama Kaki adalah = %.2f",c*(a + b)*0.5);
        KeyC(0);

        ulangLtrapesium :
        printf("\ningin mengulang Luas Trapesium Sama Kaki(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto Ltrapesium;}else if(ulang == 'n'|| ulang == 'N'){LuasBangunDatar(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangLtrapesium;};
        break;
    case 3 :
        Llayang :
        system("cls");
        printf("Masukkan Diagonal Panjang : ");scanf(" %f",&a);
        printf("Masukkan Diagonal Lebar : ");scanf(" %f",&b);
        printf("Luas Layang-Layang adalah = %.2f",0.5 * a * b);
        KeyC(0);

        ulangLlayang :
        printf("\ningin mengulang Luas Layang-Layang(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto Llayang;}else if(ulang == 'n'|| ulang == 'N'){LuasBangunDatar(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangLlayang;};
        break;
    case 4 :
        Llingkaran :
        system("cls");
        printf("Masukkan Panjang Diameter : ");scanf(" %f",&a);
        printf("Masukkan Panjang Jari-Jari : ");scanf(" %f",&b);
        printf("Luas Lingkaran berdasar jari-jari = %.2f",3.14 * b*b);
        printf("\nLuas Lingkaran berdasar Diameter = %.2f",0.25 * 3.14 * a*a);
        KeyC(0);

        ulangLlingkaran :
        printf("\ningin mengulang Luas Lingkaran(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto Llingkaran;}else if(ulang == 'n'|| ulang == 'N'){LuasBangunDatar(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangLlingkaran;};
        break;
    case 5 :
        KelilingLuasVolume(0);
    default :
        printf("Menu tidak tersedia...\n(press any key to continue...)");getch();system("cls");
        LuasBangunDatar(0);
    }
}

void VolumeBangunRuang(){
    system("cls");
    printf("\n\n ================\n Volume Bangun Ruang\n ================\n");
    printf("    1. Volume Kubus\n    2. Volume Prisma\n    3. Volume Limas\n    4. Volume Bola\n    5. Menu Sebelumnya\n ================");
    pilihmenu(0);
    switch(jwb){
    case 1 :
        Vkubus :
        system("cls");
        printf("Masukkan Panjang Sisi Kubus : ");scanf(" %f",&a);
        printf("Volume Kubus Adalah = %.2f",a * a * a );
        KeyC(0);

        ulangVkubus :
        printf("\ningin mengulang Volume Kubus(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto Vkubus;}else if(ulang == 'n'|| ulang == 'N'){VolumeBangunRuang(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangVkubus;};
        break;
    case 2 :
        Vprisma :
        system("cls");
        printf("Masukkan Sisi Persegi : ");scanf(" %f",&a);
        printf("Masukkan Lebar Alas Segitiga : ");scanf(" %f",&b);
        printf("Masukkan Tinggi Segitiga : ");scanf(" %f",&c);
        printf("Masukkan Jari - Jari Lingkaran : ");scanf(" %f",&d);
        printf("Masukkan Diameter Lingkaran : ");scanf(" %f",&e);
        printf("Masukkan Tinggi Prisma : ");scanf(" %f",&f);
        printf("Volume Prisma Persegi Adalah = %.2f",a * a *f);
        printf("\nVolume Prisma Segitiga Adalah = %.2f",(0.5 * b * c) * f);
        printf("\nVolume Silinder berdasar Jari-Jari Adalah = %.2f",(3.14 * d *d) * f );
        printf("\nVolume Silinder berdasar Diameter Adalah = %.2f",(3.14 * 0.25 * e * e) * f );
        KeyC(0);

        ulangVprisma :
        printf("\ningin mengulang Volume Prisma(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto Vprisma;}else if(ulang == 'n'|| ulang == 'N'){VolumeBangunRuang(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangVprisma;};
        break;
    case 3 :
        Vlimas :
        system("cls");
        printf("Masukkan Sisi Persegi : ");scanf(" %f",&a);
        printf("Masukkan Lebar Alas Segitiga : ");scanf(" %f",&b);
        printf("Masukkan Tinggi Segitiga : ");scanf(" %f",&c);
        printf("Masukkan Jari - Jari Lingkaran : ");scanf(" %f",&d);
        printf("Masukkan Diameter Lingkaran : ");scanf(" %f",&e);
        printf("Masukkan Tinggi Limas : ");scanf(" %f",&f);
        printf("Volume Limas Persegi Adalah = %.2f",0.3333 * (a * a) *f);
        printf("\nVolume Limas Segitiga Adalah = %.2f",(0.5 * b * c) * 0.3333* f);
        printf("\nVolume Limas Silinder berdasar Jari-Jari Adalah = %.2f",(3.14 * d *d) * 0.3333 * f );
        printf("\nVolume Limas Silinder berdasar Diameter Adalah = %.2f",(3.14* 0.25 * e * e) * 0.3333 * f );
        KeyC(0);

        ulangVlimas:
        printf("\ningin mengulang Volume Limas(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto Vlimas;}else if(ulang == 'n'|| ulang == 'N'){VolumeBangunRuang(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangVlimas;};
        break;
    case 4 :
        Vbola:
        system("cls");
        printf("Masukkan Jari-Jari Lingkaran : ");scanf(" %f",&a);
        printf("Masukkan Diameter Lingkaran : ");scanf(" %f",&b);
        printf("Volume Bola berdasar Jari-Jari Adalah = %.2f",1.33333 * 3.14 * (a * a * a));
        printf("\nVolume Bola berdasar Diameter Adalah = %.2f",1.33333 * 3.14 * (b * b * b/8));
        KeyC(0);

        ulangVbola:
        printf("\ningin mengulang Volume Bola(y/n)");
        scanf(" %c",&ulang );
        if(ulang == 'y' || ulang == 'Y'){goto Vbola;}else if(ulang == 'n'|| ulang == 'N'){VolumeBangunRuang(0);}
        else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangVbola;};
        break;
    case 5 :
        KelilingLuasVolume(0);
    default :
        printf("Menu tidak tersedia...\n(press any key to continue...)");getch();system("cls");
        VolumeBangunRuang(0);
    }




}

void KelilingLuasVolume(){
    system("cls");
    printf("\n\n ================\n Keliling Luas Volume\n ================\n");
    printf("    1. Hitung Keliling Bangun Datar\n    2. Hitung Luas Bangun Datar\n    3. Hitung Volume Bangun Ruang\n    4. Menu Utama\n ================");
    pilihmenu(0);
    switch(jwb){
    case 1 :
        KelilingBangunDatar(0);
    case 2 :
        LuasBangunDatar(0);
    case 3 :
        VolumeBangunRuang(0);
    case 4 :
        main();
    default :
        printf("Menu tidak tersedia...\n(press any key to continue...)");getch();system("cls");
        KelilingLuasVolume(0);
    }
}

void AkarKuadrat(){
    akar :
    system("cls");
    printf("Masukkan Bilangan yang akan diakar = ");scanf(" %f",&a);
    printf("Hasil akar dari %.2f adalah %.2f",a,sqrt(a));
    KeyC(0);

    ulangakar :
    printf("\ningin mengulang Hitung Akar(y/n)");
    scanf(" %c",&ulang );
    if(ulang == 'y' || ulang == 'Y'){goto akar;}else if(ulang == 'n'|| ulang == 'N'){system("cls"); main(0);}
    else{system("cls");printf("\nPilihan tidak tersedia...");goto ulangakar;};
}



int main()
{
    printf("\n\n ================\n Tugas Kalkulator\n ================\n");
    printf("    1. KaliBagiTambahKurang\n    2. SinCosTan\n    3. Hitung Keliling dan Luas\n    4. Hitung Akar Kuadrat\n    5. Exit\n ================");
    pilihmenu(0);
    switch(jwb){
    case 1 :
        KaliBagiTambahKurang(0);
        break;
    case 2 :
        SinCosTan(0);
        break;
    case 3 :
        KelilingLuasVolume(0);
        break;
    case 4 :
        AkarKuadrat(0);
        break;
    case 5 :
        system("cls");
        printf("TERIMA ~ KASIH");
        KeyC(0);
        exit(0);
    }
    return 0;
}
