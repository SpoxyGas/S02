// #include <stdio.h>
// #include <stdlib.h>
//
// int main(void) {
//     double a = 1.23e+14;
//     float b = 0.034;
//     char c = 'Z';
//     unsigned int d = 3147483647;
//     long e = 31474836472;
//     int pad = 5;
//
//     printf("a = %lf\n", a);
//     printf("b = %f\n", b);
//     printf("c = %c\n", c);
//     printf("d = %u\n", d);
//     printf("e = %ld\n\n", e);
//
//     printf("b_10 = %.10f\n\n", b);
//     // Es ist zu bemerken dass der Output präzise ist. Also genau 0.5 mit 10 Nachkommastellen.
//
//     printf("c_hex = 0x%x\n\n", c);
//
//
//     printf("c_pad = %0*d\n\n",pad , c);
//
//     printf("a = %15.4f\n", a);
//     printf("b = %15.4f\n", b);
//     printf("c = %15.4f\n", (float)c);
//     printf("d = %15.4f\n", (float)d);
//     printf("e = %15.4f\n\n", (float)e);
//
//
//     return EXIT_SUCCESS;
// }

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int zero; //Es wurde kein Wert dem Int zugewiesen, weswegen dieser keine Funktion ausführen kann.
    printf("zero = %hd\n", zero); //%hd kann nicht verwendet werden. hd wird für short int verwendet und d für normale int. Daher wird es zu Overflow kommen.
    return EXIT_SUCCESS;
}
