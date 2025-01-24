#include <stdio.h>
#include <string.h>

int main()
{
    /*
    These are some examples for play with strings 

    char name1 = "Sujeevan";
    char name2 = "Feros";
    
    strlwr(name1);  // make all characters to lowercase ===> sujeevan
    strupr(name1);  // make all characters to upper case ===> SUJEEVAN  
 
    strcat(name1, name2);  // append name2 to end of name1 ===> SujeevanFeros
    strncat(name1, name2, 2); // append name2's nth character(s) to end of name1 ===> SujeevanFe

    strcpy(name1, name2); // copy name2 to name1 ===> Feros
    strncpy(name1, name2, 2); // copy name2's n character(s) to name1 ===> Fejeevan

    strset(name1, '?'); ===> ???????? these will not work on modern gcc or clang we can use memset insted of strset
    io: memset(name1, '?', strlen(name1)) 

    strnset(name1, 'x', 3); also this!!!
    io: memset(name1, '?', 3) ===> ???eevan

    strrev(name2); this also won't be work
    use the below code instead

===========================================================================

#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int start = 0;
    int end = strlen(str) - 1;
    
    while (start < end) {
        // Swap characters at start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    char name[] = "Sujeevan";
    reverseString(name);  // Reverses the string using custom function
    printf("%s\n", name);  // Output: naveejuS
    return 0;
}

=============================================================================

    int length = strlen(name1);

    int result1 = strcmp(name1, name2);
    int result2 = strncmp(name1, name2, 1);
    int result3 = strcmpi(name1, name2);
    int result4 = strnicmp(name1, name2, 2); */

}