/*
  A pangram is a sentence that contains every single letter of the alphabet at least once. For example, the sentence "The quick brown fox jumps over the lazy dog" is a pangram, because it uses the letters A-Z at least once (case is irrelevant).

Given a string, detect whether or not it is a pangram. Return True if it is, False if not. Ignore numbers and punctuation.

*/
#include <stdbool.h>
#include <stdlib.h>

bool is_pangram(const char *str_in) {
 
  int i = 0;
  int flag = 1;
  
  char **string_array[1] =  malloc(sizeof(*str_in)* 2);
  
  while(string_array){
    switch(string_array[i])
      {
        case 'a':
          flag = 1;
          break;
        case 'b':
          flag = 1;
          break;
        case 'c':
          flag = 1;
          break;
        case 'd':
          flag = 1;
          break;
        case 'e':
          flag = 1;
          break;
        case 'f':
          flag = 1;
          break;
        case 'g':
          flag = 1;
          break;
        case 'h':
          flag = 1;
          break;
        case 'i':
          flag = 1;
          break;
        case 'j':
          flag = 1;
          break;
        case 'k':
          flag = 1;
          break;
        case 'l':
          flag = 1;
          break;
        case 'm':
          flag = 1;
          break;
        case 'n':
          flag = 1;
          break;
        case 'o':
          flag = 1;
          break;
        case 'p':
          flag = 1;
          break;
        case 'q':
          flag = 1;
          break;
        case 'r':
          flag = 1;
          break;
        case 's':
          flag = 1;
          break;
        case 't':
          flag = 1;
          break;
        case 'u':
          flag = 1;
          break;
        case 'v':
          flag = 1;
          break;
        case 'w':
          flag = 1;
          break;
        case 'x':
          flag = 1;
          break;
        case 'y':
          flag = 1;
          break;
        case 'z':
          flag = 1;
          break;
        default:
          flag = 0;      
    }
      i++;
  }
  
    if(flag == 1)
      {
      return true;
    }
    else{
      return false;
    }
}
