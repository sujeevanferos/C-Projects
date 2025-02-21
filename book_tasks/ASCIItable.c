#include <stdio.h>
int main()
{

  char ch, cH;
  printf("ASCII TABLE\n");
  
for(ch = 'a'; ch <= 'z'; ch++)
  {
    cH = ch - 32;
    printf("%c %3d %4c %3d\n", ch, ch, cH, cH);
  }
  
  return 0;
}
