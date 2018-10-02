//
// Created by farida on 27/08/18.
//

#ifndef DESIGNPATTERNSCPLUSPLUS_BODY_H
#define DESIGNPATTERNSCPLUSPLUS_BODY_H


#include <string>

class Body {

    std::string Material = "none";
    int DragPercentage = 0;

public:
    Body();

    const std::string &getMaterial() const;

    int getDragPercentage() const;

    void setMaterial(const std::string &Material);

    void setDragPercentage(int DragPercentage);

};

class LuxuryBody: public Body{

public:
    LuxuryBody();

};

class NormalBody: public Body{
public:
    NormalBody();
};


#endif //DESIGNPATTERNSCPLUSPLUS_BODY_H
