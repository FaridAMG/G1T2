//
// Created by kevinfgn on 10/3/18.
//
#include <iostream>
#include <string>

#ifndef DESIGNPATTERNS_BUILDER_H
#define DESIGNPATTERNS_BUILDER_H
class guitar
{
public:
    class builder;
    guitar(int nStrings,std::string brand, std::string type)
            : nStrings{nStrings}, brand{brand}, type{type}
    { }
    int nStrings;
    std::string brand;
    std::string type;
};
class guitar::builder
{
public:
    builder& withNStrings(int value) { nStrings = value; return *this; };
    builder& withBrand(std::string value) { brand = value; return *this; };
    builder& withType(std::string value) { type = value; return *this; };
    guitar build() const
    {
        return guitar{nStrings, brand, type};
    }
private:
    int nStrings = 0;
    std::string brand = "";
    std::string type = "";
};
#endif //DESIGNPATTERNS_BUILDER_H
