#include <boost/regex.hpp>
#include <iostream>
int main(int argc, char const *argv[])
{
    std::string text = "Hello world";
    
    const char* pattern = "\\b\\w*\\b";
    boost::regex reg(pattern);
    boost::sregex_iterator it(text.begin(), text.end(), reg);
    boost::sregex_iterator end;
    for (; it != end; ++it) {
        std::cout << it->str() << std::endl;
    }

    return 0;
}