/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float tien_gui, lai_suat, so_thang, tong_tien, tien_lai;
    printf("nhap so tien muon gui\n ");
    scanf("%f",&tien_gui);
    printf("nhap so phần tram lai\n ");
    scanf("%f",&lai_suat);
    printf("so thang muon gui\n ");
    scanf("%f",&so_thang);
    lai_suat /= 100;
    tong_tien = tien_gui;
    for(int i=0;i<so_thang;i++){
        tong_tien+=tong_tien*lai_suat;
    }
    tien_lai=tong_tien-tien_gui;
    printf("Tien lai %.2f\n", tien_lai);
    printf("Tiền nhận được: %.2f\n", tong_tien);
    return 0;
}
