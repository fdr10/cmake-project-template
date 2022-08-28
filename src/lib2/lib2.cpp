#include "lib2/public.h"
#include "private.h"
#include <iostream>
/**
  Doxygen example of a function documentation
  @param an std::string which contains the output message
  @return dummy return value. This is just an example doc 
**/
int lib2_function(std::string msg){
  std::cout<<"Hello from lib2"<<std::endl;
  std::cout<<"Input message: "<<msg<<std::endl;
  return 0;
}



