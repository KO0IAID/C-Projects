#include <stdio.h>
#include <stdbool.h>    // For bool type

int main() {
    //-----------------------------------------------------------------------------------------------------------
    // Character Data Types                                                                     Format Specifier
    //-----------------------------------------------------------------------------------------------------------
    char a = 'A';                       // Single character                                     %c
    char b = 66;                        // ASCII value as integer                               %d or %c
    char c[] = "Name";                  // String (array of characters)                         %s

    //-----------------------------------------------------------------------------------------------------------
    // Integer Data Types (Signed)
    //-----------------------------------------------------------------------------------------------------------
    short s = -32000;                       // 2 bytes (range: -32,768 to 32,767)               %hd
    int i = 2147483647;                     // 4 bytes (range: -2,147,483,648 to 2,147,483,647) %d
    long l = 1000000000L;                   // 4 or 8 bytes depending on system                 %ld
    long long ll = 9223372036854775807LL;   // 8 bytes (very large numbers)                     %lld

    //-----------------------------------------------------------------------------------------------------------
    // Integer Data Types (Unsigned)
    //-----------------------------------------------------------------------------------------------------------
    unsigned short us = 65000;                          // 2 bytes (range: 0 to 65,535)         %hu
    unsigned int ui = 4294967295U;                      // 4 bytes (range: 0 to 4,294,967,295)  %u
    unsigned long ul = 4000000000UL;                    // 4 or 8 bytes                         %lu
    unsigned long long ull = 18446744073709551615ULL;   // 8 bytes                              %llu

    //-----------------------------------------------------------------------------------------------------------
    // Floating Point Data Types
    //-----------------------------------------------------------------------------------------------------------
    float f = 3.141592f;                 // 4 bytes (6-7 decimal digits)                        %f
    double d = 3.141592653589793;        // 8 bytes (15-16 decimal digits)                      %lf
    long double ld = 2.718281828459045L; // 10, 12, or 16 bytes (platform dependent)            %Lf

    //-----------------------------------------------------------------------------------------------------------
    // Boolean Data Type
    //-----------------------------------------------------------------------------------------------------------
    bool flag = true;               // 1 byte (true = 1, false = 0)                             %d

    //-----------------------------------------------------------------------------------------------------------
    // Pointer Data Type
    //-----------------------------------------------------------------------------------------------------------
    int *ptr = &i;                  // Pointer to an integer                                    %p

    //-----------------------------------------------------------------------------------------------------------
    // Output Section
    //-----------------------------------------------------------------------------------------------------------
    printf("===== Character Types =====\n");
    printf("char a = 'A'                 : %c\n", a);
    printf("char b = 66                  : %d (as int), %c (as char)\n", b, b);
    printf("char c[] = \"Nick\"          : %s\n\n", c);

    printf("===== Signed Integers =====\n");
    printf("short s                      : %hd\n", s);
    printf("int i                        : %d\n", i);
    printf("long l                       : %ld\n", l);
    printf("long long ll                 : %lld\n\n", ll);

    printf("===== Unsigned Integers =====\n");
    printf("unsigned short us            : %hu\n", us);
    printf("unsigned int ui              : %u\n", ui);
    printf("unsigned long ul             : %lu\n", ul);
    printf("unsigned long long ull       : %llu\n\n", ull);

    printf("===== Floating Point Types =====\n");
    printf("float f                      : %f\n", f);
    printf("double d                     : %lf\n", d);
    printf("long double ld               : %Lf\n\n", ld);

    printf("===== Boolean Type =====\n");
    printf("bool flag = true             : %d\n\n", flag);  // Prints 1

    printf("===== Pointer Type =====\n");
    printf("int* ptr = &i                : %p (address of i)\n", (void*)ptr);

    return 0;
}
