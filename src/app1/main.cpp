#include "fmt/core.h"
#include "lib1/public.h"
#include <cstdio>
#include <fmt/format.h>
#include <json/json.h>
#include <memory>
#include <iostream>

/**
  Doxygen main function example  
**/
int main(){
  std::cout<<"Test cmake template"<<std::endl;
  lib1_function("Lib1");
  //fmt::print(stdout, "Output to fmt");
  



  // Jsoncpp example writing to stdout
  Json::Value data;
  Json::StreamWriterBuilder builder;

  const std::unique_ptr<Json::StreamWriter> writer{builder.newStreamWriter()};
  data["key1"]="value1";
  data["key2"]="value2";
  data["key3"]=3;

  writer->write(data, &std::cout);
  return 0;
}
