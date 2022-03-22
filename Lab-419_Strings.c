/*

Write a program that asks for the IP address in a human readable form, creates three substrings, and prints them.

These substrings are created from parts 3, 2, and 1 of the last part of the IP address.

These substrings should be created with the use of pointers or array indexing (whichever you prefer). If a given string doesn't have three dots, then the program should print the message: Error: not a valid address..

Your program should also check if a given string consists only of digits and dots, and that there are no more than three digits in each block. You don't have to check if the numbers are smaller than 256.

Note: You can use the isdigit function, but you can also write your own code to check whether or not a character is a digit.

*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    /* your code */
    char ip[16];
    fgets(ip, 16, stdin);
    
    bool validaddr = true;
    int dotcount = 0, i, dots = 0;
    
    for (i = 0; i < 16; i++) {
        if (ip[i] == '.') {
            dotcount += 1;
            if (dots == 0) { 
              dots = i - dots;
              if (dots > 3 || dots == 0) {
                validaddr = false;
                break;
              }
            }
            else if (dots != 0) { 
              dots = i - dots - 1;
              if (dots > 3 || dots == 0) {
                validaddr = false;
                break;
              }
              else { dots = i; }
            }
            
        }
        if (ip[i] == '\0' && i - dots - 1 > 3) {
            validaddr = false;
            break;
        }
        if (isdigit(ip[i]) == 0 && ip[i] != '.') {
            validaddr = false;
            break;
        }
    }
    
    if (dotcount == 3)  { validaddr = true; }
    else { validaddr = false; }
    
    if (validaddr == true) {
        int index = 0;
        printf("Last 3 parts: ");
        for (i = 0; i < 16; i++) {
          if (ip[i] == '.') {
            index = i + 1;
            for (i = i + 1; i < 16; i++) { 
                if (ip[i] == '\0' || ip[i] == '\n') break;
                printf("%c", ip[i]);
            }
            break;
          }
        }
        
        printf("\nLast 2 parts: ");
        for (i = index; i < 16; i++) {
          if (ip[i] == '.') {
            index = i + 1;
            for (i = index; i < 16; i++) { 
                if (ip[i] == '\0' || ip[i] == '\n') break;
                printf("%c", ip[i]); 
            }
            break;
          }
        }
        printf("\nLast 1 part: ");
        for (i = index; i < 16; i++) {
          if (ip[i] == '.') {
            index = i + 1;
            for (i = index; i < 16; i++) { 
                if (ip[i] == '\0') break;
                printf("%c", ip[i]);
            }
            break;
          }
        }
    }
    else { puts("Error: not a valid address."); }
    return 0;
}