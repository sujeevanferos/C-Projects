#include <stdio.h>
int main()
{
    /*a very basic input output*/
  int c = getchar();
  /*notice there is no char, i used int insted of it
   * means, I enter a character, it stored as a inter value (ASCII) then putchar returns the character which was represented by 
   * that integer value !*/

  /*EOF - End Of File*/
  while(c != EOF)
  {
    putchar(c);
    c = getchar();

  }
  /*this code will print the input as the output */

  return 0;
}
