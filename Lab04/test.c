#include <stdio.h>
#include <string.h>

void rev(char* msg)
{
  if (msg[strlen(msg)-1] == 'o') {
  rev(msg+1);
  putchar(msg[0]);
  }
}

int main()
{
  char txt[] = "hello";
  rev(txt);
  return 0;
}
