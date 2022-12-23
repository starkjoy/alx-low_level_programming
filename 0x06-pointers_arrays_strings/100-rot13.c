#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * rot13 - encode a string in rot-13
 * Description: Capitalizes sentences
 * @c: accepts string
 * Return: returns a pointer
 */

char *rot13(char *c) 
{
  int i = 0;
  int len = strlen(c);
  
  char alp[] = "abcdefghijklmnopqrstuvwxyz";
  char rot[] = "nopqrstuvwxyzabcdefghijklm";
  char Alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char Rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
  
  while (i < len) 
  {
    char ch = c[i];
    
    if (ch >= 'a' && ch <= 'z') 
    {
      c[i] = rot[ch - 'a'];
    } 
    else if (ch >= 'A' && ch <= 'Z')
    {
      c[i] = Rot[ch - 'A'];
    }
    i++;
  }

  return c;
}
