//
// Created by fantom on 05.04.18.
//

#include <utility>
#include <iostream>

float getX(std::pair<float, float> pair) {
    float x = std::get<0>(pair);
    return x;
}

float getY(std::pair<float, float> pair) {
    float y = std::get<1>(pair);
    return y;
}

Dot operator+(std::pair<float, float> FirstPair, std::pair<float, float> SecondPair){
    float TMP1 = getX(FirstPair) + getX(SecondPair);
    float TMP2 = getY(FirstPair) + getY(SecondPair);
    Dot res = std::make_pair(TMP1, TMP2);
    return res;
};

Dot operator*(std::pair<float, float> Pair, float Number){
    float TMP1 = getX(Pair)*Number;
    float TMP2 = getY(Pair)*Number;
    Dot res = std::make_pair(TMP1, TMP2);
    return res;
};

#include "WorkWithPairs.h"
