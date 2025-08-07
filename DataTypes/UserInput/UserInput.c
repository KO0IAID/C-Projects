#include <stdio.h>
#include <string.h>     // Allows us to work with strings, specifically for strlen(), and strspn()

int main() {

    char color[10];      // Specify the amount of Bytes
    char name[25];
    int age;

    //---------------------------------------
    //  scanf
    //---------------------------------------
    printf("\nWhat's your favorite color? ");
    scanf("%s", &color);                // scanf only reads up to first whitespace  (type specifier, memory address of variable)                    
                                        // LEAVES a'\n' in the INPUT buffer 

    // Clear leftover newline from buffer
    while (getchar() != '\n');          //getchar is part of <stdio.h>


    //
    
    printf("What's your full name? ");
    fgets(name, 25, stdin);             // fgets for when you need whitespaces      (variable, size, standardinputin) 
                                        // LEAVE a '\n' in the VARIABLE value  

    // Clear the newline from variable                                    
    // name[strlen(name)-1] = '\0';        // strlen is part of <string.h>
    
    // Better way:
     name[strspn(name, "\n")] = '\0'       // Searches for newline and replaces only if found



    printf("How old are you? ");
    scanf("%d", &age);                  // Sets the type expected, then targets the memory address of our variable

    printf("\nYour favorite color is %s", color);
    printf("\nYour name is %s\n", name);
    printf("You are %d years old ", age);

    return 0;
}