//Auto Genrated C++ file by Flick CLI
//None
#include<iostream>
#include<dsa-using-cppconfig.h>
int main(int argc,char*argv[])
{
    std::cerr << "Hello, " << Project::COMPANY_NAME << std::endl;
    std::cerr << Project::PROJECT_NAME << " v" << Project::VERSION_STRING << std::endl;
    std::cerr << Project::COPYRIGHT_STRING << std::endl;
    for(int i=0;i<argc;++i){
      std::cerr<<argv[i]<<std::endl;
    }
    return 0;
}
