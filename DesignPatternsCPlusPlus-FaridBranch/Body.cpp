//
// Created by farida on 27/08/18.
//

#include "Body.h"


const std::string &Body::getMaterial() const {
    return Material;
}

int Body::getDragPercentage() const {
    return DragPercentage;
}

void Body::setMaterial(const std::string &Material) {
    Body::Material = Material;
}

void Body::setDragPercentage(int DragPercentage) {
    Body::DragPercentage = DragPercentage;
}

Body::Body() {}

LuxuryBody::LuxuryBody() {

    setMaterial("Carbon fiber");
    setDragPercentage(32);

}

NormalBody::NormalBody() {

    setMaterial("Aluminum");
    setDragPercentage(86);

}
