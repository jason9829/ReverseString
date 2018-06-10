#include "ReverseString.h"
#include <ctype.h>

int  getStringLength(char * str)
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
char  *ReverseString(char *str)
 {
   char *Rev_storage;
   int   i    = 0 ;
   int   k    = 0 ;
   if(str== 0 || str[i] =='\0')
   {
     return "NULL or empty string detected.";
   }
   if(isalpha(str[i]) || isdigit(str[i]))// if use str (pointer) it store address so cant compare bcz isaplha(int)
   {
     while(str[i] !=0 && str !='\0')
     {
       i++;
     }
    for (k==i;k=>0;k--)
    {
      str[i]== Rev_storage;
      i++;
    }
    return  Rev_storage;
   }

 }
