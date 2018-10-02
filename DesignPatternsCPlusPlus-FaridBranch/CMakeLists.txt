cmake_minimum_required(VERSION 3.10)
project(DesignPatternsCPlusPlus)

set(CMAKE_CXX_STANDARD 14)

add_executable(DesignPatternsCPlusPlus main.cpp CarFactory.cpp CarFactory.h Car.cpp Car.h Tires.cpp Tires.h Engine.cpp Engine.h Body.cpp Body.h mainAbstractFact.cpp mainAbstractFact.h)