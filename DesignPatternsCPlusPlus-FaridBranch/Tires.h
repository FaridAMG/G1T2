//
// Created by farida on 27/08/18.
//

#ifndef DESIGNPATTERNSCPLUSPLUS_TIRES_H
#define DESIGNPATTERNSCPLUSPLUS_TIRES_H


#include <string>

class Tires {

    std::string performance = "none";
    int pressure = 0;

public:
    Tires();

    const std::string &getPerformance() const;

    int getPressure() const;

    void setPerformance(const std::string &performance);

    void setPressure(int pressure);

};



class LuxuryTires: public Tires{
public:

    LuxuryTires();

};



class NormalTires: public Tires{
public:

    NormalTires();

};



#endif //DESIGNPATTERNSCPLUSPLUS_TIRES_H
