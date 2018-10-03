#include <iostream>
#include <string>
#include "Builder.h"

int main() {
    std::cout << "Create your guitar" << std::endl;
    std::cout << "How many strings do you want" << std::endl;
    int n;
    std::cin >> n;
    std::cout << "Which brand" << std::endl;
    std::string i;
    std::cin >> i;
    std::cout << "Which type(acoustic or electric)" << std::endl;
    std::string j;
    std::cin >>j;
    guitar::builder &a = guitar::builder{}.withNStrings(n)
                                          .withBrand(i)
                                          .withType(j);
    std::cout << "Guitar succesfully created"<<std::endl;


}
