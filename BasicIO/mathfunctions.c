#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){

    //Data Types
    char a = 'C';     // a single character   %c (character)
    char b[] = "Bro";   // array of character %s (string)

    float c = 3.123456; // 4 bytes (32 bits of operation) - 6 to 7 digits %f
    double d = 3.1234567812345678; // 8 bits (64 bits of operation) - 15 to 16 digits %lf

    bool e = true; // 1 byte (true or false) %d

    char f = 100; // 1 byte (-128 to 127) %d or %c
    unsigned char g = 255; // 1 byte (0 to 255) %d or %c

    short int h = 32767; // 2 bytes (-32,768 to 32,767) %d (not necessary to include int; short h = 973462 is enough!)
    unsigned short int i = 65535; // 2 bytes (0 to 65535) %d

    int j = 3344125; // 4 bytes %d (these types are already considered as long)
    unsigned int k = 66787800; //4 bytes %u

    long long int l = 298683590265; // 8 bytes %lld
    unsigned long long int m = 9132360125924156; // 8 bytes %llu



    // some important math functions!

    double A = sqrt(9);
    double B = pow(12, 13);
    int C  = round(3.334);
    int D = floor(3.334);
    int E = ceil(3.334);
    int F = fabs(-3.1234);
    int G = log(3);
    int H = sin(45);
    int I = cos(45);
    int J = tan(45);



    return 0;
}