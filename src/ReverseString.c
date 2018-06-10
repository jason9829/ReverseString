#include "ReverseString.h"
#include <ctype.h>

int getStringLength(char * str)
{
  int   i    = 0 ;
  if(str== 0 || str[i] =='\0')
  {
    return 0;
  }
  if(isalpha(str[i]) || isdigit(str[i]))// if use str (pointer) it store address so cant compare bcz isaplha(int)
  {
    while(str[i] !=0 && str !='\0')
    {
      i++;
    }
    return i;
  }
}
