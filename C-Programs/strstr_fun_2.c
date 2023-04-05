// strstr funtion
#include <string.h>
#include <stdio.h>
  
int main()
{
    // Take any two strings
    char s1[] = "Hello world c-program";
    char s2[] = "world";
    char* p;
  
    // Find first occurrence of s2 in s1
    p = strstr(s1, s2);
  
    // Prints the result
    if (p) {
        strcpy(p, "Removed");
        printf("%s", s1);
    } else
        printf("String not found\n");
  
    return 0;
}