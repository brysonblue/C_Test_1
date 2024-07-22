#include <stdio.h>

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







    return 0;
}