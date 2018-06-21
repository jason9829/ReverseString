#include "ReverseString.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

int  getStringLength(char * str)
{
  int   i    = 0 ;
  if(str== 0 || *str =='\0')    //check for NULL and end of string (empty string)
  {
    return 0;
  }

    while(str[i] !=0 && *str !='\0')      // * dereference to compare content.
    {
      i++;
    }
    return i;
}

// Method 1 (move pointer to last character and store in backwards)
char  *ReverseString(char *str)                  //return string so need * for function name.
 {
   char *Rev_storage ;                            //static = staic variable will be overwrite existing memory.
   Rev_storage= malloc(getStringLength(str)+1);

   int   i    = 0 ;
   int   k    = 0 ;
   int   j    = 0 ;

   if(str== 0 || *str =='\0')
   {
     return "NULL or empty string detected.";
   }
	 else
   {
		 j = getStringLength(str);   // got the length of the string
      // 12345 "\0"   j=5
      // while loop stop when i and str at "\0"
      // after loop move 1 step back to point at last character
    while (i<j)
    {
      ++str;                     // Move the pointers until '\0'(end of string)
      i++;                       // I increment to check the conditions
    }

		str--;                           // pointer decrement to move 1 step back from '\0'
    i--;

    for (k=i;k>0;k--)                    // move back byte by byte
    {                                    // str = 12345 "\0"
                                         // after loop Rev_storage point at 54321"\0"
        Rev_storage = &(str[k]);         // then return the reversed string that are pointed
        ++Rev_storage;                   // Point to next char array
    }

    return    Rev_storage;
	   }
  //}
}


// Method 2 (character swapping) should be working but rake aborted??
/*
char  *ReverseString(char *str)       //return string so need * for function name.
 {
   char *first_char  = str;
   char temp;
   char *last_char    = first_char +  getStringLength(str) -1;  // minus the '\0'

   if(str== 0 || str[0] =='\0')
   {
     return "NULL or empty string detected.";
   }
   else
   {
     while(last_char>first_char)        //Example       (first_char & last_char swap)
     {                                  // ABCD- last_char then replace by temp (first_char)
      temp= *first_char;                 // |
      *first_char = *last_char;         // first_char then replace by last_char
      *last_char  = temp;               // After swap1
      first_char++;                     //DBCA
      last_char--;                      // ||
                                        // 1L       1= first_char,L= last_char
                                        // After swap2
                                        //DCBA      Complete!!
                                        // The process continue until last_char < first_char

     }


    //free(Rev_storage);
    return  str;
   }

 }
*/
