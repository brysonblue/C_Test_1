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
    int x = 123;
    int y = 321; //declaration + initialization

    int age = 21; //integer
    float gpa = 3.99; //floating point number
    char grade = 'A'; //single character
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
    //unisnged long long int m = 1844674407370955161U; // 8 bytes (0 to +18 quintillion) %llu

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



    return 0;
}