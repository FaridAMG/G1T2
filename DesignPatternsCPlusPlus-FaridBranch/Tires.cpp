//
// Created by farida on 27/08/18.
//

#include "Tires.h"



const std::string &Tires::getPerformance() const {
    return performance;
}

int Tires::getPressure() const {
    return pressure;
}

void Tires::setPerformance(const std::string &performance) {
    Tires::performance = performance;
}

void Tires::setPressure(int pressure) {
    Tires::pressure = pressure;
}

Tires::Tires() {}


LuxuryTires::LuxuryTires() {

    setPerformance("Racing");
    setPressure(115);

}

NormalTires::NormalTires() {

    setPerformance("street");
    setPressure(85);

}
