#include <string>
using namespace std ; 

string reverseString (string str )
{
  short str_len = str.length();
  string reverse_string;
  
  for(short i = str_len-1; i >= 0; i--)
  {
    reverse_string += str[i];
   
  }
   return reverse_string;
}
