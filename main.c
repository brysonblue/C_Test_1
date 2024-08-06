#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //this is a comment
    /* This is a multiline comment
     */
    /* escape sequence = character combination consisting of a backslash \
     *                   followed by a letter or combination of digits.
     *                   they specify actions within a line or string of text.
     *                   \n = newline
     *                   \t = tab
     */

    printf("Hello, World!\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("\"I like pizza\" -  Abraham Lincoln probably\n");
    printf("To put single quotes you would write backslash quote, and backslash quote again. \' \' \n");
    printf("To print backslahes you type two backslashes together \\ \\ \n");

    /* variable = Allocated space in memory to store a value.
                  We refer to a variable's name to access the stored value.
                  That variable now behaves as if it was the value it contains.
                  BUT we need to declare what type of data we are storing.
    */

    //int x; declaration
    //x = 123; initialization
    //int x = 123;
    //int y = 321; //declaration + initialization

    const int age = 21; //integer
    const float gpa = 3.99; //floating point number
    const char grade = 'A'; //single character
    char name[] = "Bro"; //array of characters


    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your GPA is %f\n", gpa);

    char a = 'C';                // single character    %c
    char b[] = "Bro";            // array of characters %s

    float c = 3.141592;          // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793;// 8 bytes (64 bits of precision) 15 - 16 digits %lf

    bool w =  true;              // 1 byte (true or false) %d

    //char f = 100;              // 1 byte (-128 to +127) %d or %c
    //unsigned char g = 255;     // 1 byte (0 to +255) %d or %c

    //short int h = 32767;       // 2 bytes (-32,768 to +32,767) %d
    //unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d

    int j = 2147483647;          // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    //unisgned int k = 4294967295L; // 4 bytes (0 to +4,294,967,295) %u

    //long long int 1 = 9223372036854775807;           // 8 bytes (-9 quintillion to +9 quintillion) %lld
    //unisnged long long int m = 1844674407370955161U; // 8 bytes (0 to +18 quintillion) %llu //will have an error if used without U

    //printf("%c\n", a);    // char
    //printf("%s\n", b);    // character array
    //printf("%f\n", c);    // float
    //printf("%lf\n", d);   // double
    //printf("%d\n", e);    // bool
    //printf("%d\n", f);    // char as numeric value
    //printf("%d\n", g);    // unsigned char as numeric value
    //printf("%d\n", h);    // short
    //printf("%d\n", i);    // unisgned short
    //printf("%d\n", j);    // int
    //printf("%u\n", k);    // unsigned int
    //printf("%lld\n", l);  // long long int
    //printf("%llu\n", m);  // unsigned long long int


    //   format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    const float item1 = 5.75;
    const float item2 = 10.00;
    const float item3 = 100.99;

    printf("Item 1: $%f\n", item1);
    printf("Item 1: $%.2f\n", item2);
    printf("Item 1: $%f8\n", item3);
    printf("Item 1: $%-f\n", item1);
    printf("Item 1: $%f\n", item1);


    // constant = fixed value that cannot be altered by the program during its execution

    const float PI = 3.14159;

    printf("%f\n", PI);


    // arithmetic operators

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ increment
    // -- decrement

    int x = 5;
    int y = 2;

    //int z = x + y;
    //int z = x - y;
    //int z = x * y;
    //int z = x / (float) y;

    x++;
    y--;

    printf("%d\n",x);
    printf("%d\n",y);


    /* augmented assignment operators = used to replace a statement where an operator
                                        takes a variable as one of its arguments
                                        and then assigns the result back to the same variable
                                        x = x + 1
                                        x+=1

    int x = 10;

    x = x+2;
    x+=2;

    x = x - 3;
    x-=3;

    x = x * 4;
    x*=4;

    x = / 5;
    x/=5;

    x = % 2;
    x%=2;

    printf("%d", x);

    */

    /*

    int age;

    printf("How old are you?");
    scanf("%d", age);
    */

    /*
#include <inttypes.h>
#include <stdio.h>
#include <string.h>


    int main(void)
    {

        char name[25]; //bytes
        int age;

        printf("\nWhat's your name?");
        //scanf("%s", &name);                        // scanf is an input function up to a white space
        fgets(name, 25, stdin);             /* fgets function is an input that reads white spaces,
                                                        stdin is standard input * /
        name[strlen(name)-1] = '\0';                // strlen == string length

        printf("\nHow old are you?");
        scanf("%d", &age);

        printf("\nHello %s, how are you?", name);
        printf("\nYou are %d years old", age);

        return 0;
    }
    */

    return 0;
}

