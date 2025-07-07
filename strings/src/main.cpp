// Auto Genrated C++ file by Flick CLI
// None
#include <dsa-using-cppconfig.h>

#include "string.hxx"

int main(int argc, char* argv[])
{
    String msg("hello,world!");
    String one{"1"}, two{"2"};
    two = msg + one + two;
    msg.info();
    one.info();
    two.info();
    std::cout << two;
    return 0;
}
