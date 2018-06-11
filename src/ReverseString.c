#include "ReverseString.h"
#include <ctype.h>
#include<stdio.h>

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
char  *ReverseString(char *str)       //return string so need * for function name.
 {
   char *Rev_storage;
   int   i    = 0 ;
   int   k    = 0 ;
   int   j    = 0 ;
  // Rev_storage = (char *)malloc(sizeof(char));
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
     str--;
    for (k==i;k>=0;k--)
    {
      Rev_storage = &(str[k]);
      Rev_storage++;
      j++;
    }
    //free(Rev_storage);
    return  Rev_storage;
   }

 }
