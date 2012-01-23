#include <cxxabi.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main (int argc, char** argv)
{
  int status = -1;
  if (argc > 1)
    for (int i = 1; i < argc; i++)
    {
      char *demangledName = abi::__cxa_demangle(argv[i], NULL, NULL, &status );
      if ( status == 0 )
      {
          std::cout << argv[i] << "\t" << demangledName << std::endl;
      }
      free( demangledName );
    }
}
