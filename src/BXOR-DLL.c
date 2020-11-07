# include <stdio.h>
# include <string.h>
# include <limits.h>

# ifdef BUILD_DLL
# define EXPORT __declspec(dllexport)
# else
# define EXPORT __declspec(dllimport)
# endif

EXPORT char* __stdcall BXOR(char* inputCharArray, char* outputCharArray, char key){
  int len = strlen(inputCharArray);

  //Debuging code
  printf("\n\n");
  printf("Input length: %i",len);
  printf("KEY INT: %i\t Dec: %d", key, key);
  printf("\n\n");
  //Debuging code

  for(int i=0; i<len; i++)
  {
      outputCharArray[i] = inputCharArray[i] ^ key;

      //Debuging code
      printf("%c\t", inputCharArray[i]);
      printf("%c", outputCharArray[i]);
      printf("\n");
      //Debuging code
  }
  printf("\n"); //Debuging code
}