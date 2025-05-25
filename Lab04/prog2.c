#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseEcho(char* message)
{
  int len = strlen(message);
  char last_char = tolower(message[len-1]);

  if (last_char == 'a' || last_char == 'e' || last_char == 'i' || last_char == 'o' || last_char == 'u')
  {
    reverseEcho(message + 1);
    putchar(message[0]);
  }
  else {
    printf("%s\n", message);
  }
}

int beaconPattern(int n)
{
  if (n < 2) return 1;
  else
   return beaconPattern(n-1) + beaconPattern(n-2);
}

int isRecursivePalindrome (char* str, int start, int end)
{
  if(tolower(str[start]) == tolower(str[end]))
    return 1;

  else return 0;

  return isRecursivePalindrome(str, start++, end--);
}

int main()
{
  /*char msg[] = "Hello";
  reverseEcho(msg);*/

  char txt[] = "Madam";
  int s = 0, e = 5;

  isRecursivePalindrome(txt, s, e);

  return 0;
}
