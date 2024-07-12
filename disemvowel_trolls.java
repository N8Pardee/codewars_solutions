/*
  Trolls are attacking your comment section!

A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

Note: for this kata y isn't considered a vowel.

*/

public class Troll {
    public static String disemvowel(String str) {
        
      String no_vowels = "";
      for(int i = 0; i < str.length(); i++)
        {
          switch(str.charAt(i))
            {
              case 'A':
              case 'a':
                break;
              
              case 'E':
              case 'e':
                break;
              
              case 'I':
              case'i':
                break;
              
              case 'O':
              case 'o':
                break;
              
              case 'U':
              case 'u':
                break;
              
              default:
                no_vowels += str.charAt(i);
          }
      }
      
        return no_vowels;
    }
  
}
