#include <stdio.h>

int main() {
    printf("String Manipulation Functions Help Menu\n");
    printf("--------------------------------------\n\n");
    
    printf("1. strlength\n");
    printf("   Description: Finds the length of a string\n");
    printf("   Usage: strlength.exe <string>\n");
    printf("   Example: strlength.exe Ivan\n");
    printf("   Output: 4\n\n");
    
    printf("2. strconcat\n");
    printf("   Description: Concatenates two strings into the first string\n");
    printf("   Usage: strconcat.exe <destination_string> <source_string>\n");
    printf("   Example: strconcat.exe Hello World\n");
    printf("   Output: HelloWorld\n\n");
    
    printf("3. strcompare\n");
    printf("   Description: Compares two strings lexicographically\n");
    printf("   Usage: strcompare.exe <first_string> <second_string>\n");
    printf("   Example: strcompare.exe Alex Boyan\n");
    printf("   Output: -1\n");
    
    return 0;
}