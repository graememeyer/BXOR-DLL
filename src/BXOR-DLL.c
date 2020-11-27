# include <stdio.h>
# include <string.h>
# include <limits.h>

# ifdef BUILD_DLL
# define EXPORT __declspec(dllexport)
# else
# define EXPORT __declspec(dllimport)
# endif

EXPORT unsigned char* __stdcall modifyBytes(unsigned char* inputCharArray, int len, unsigned char key){  
  for(int i=0; i<len; i++)
  {
      inputCharArray[i] = inputCharArray[i] ^ key;
  }
}