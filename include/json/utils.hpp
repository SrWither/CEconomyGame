#pragma once
#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>

namespace GameJson{

void writeProp(std::string camp, int value);
void writeName(std::string name);
void writeItem(std::string camp, int value);

int getData(std::string camp);
std::string getName();
int getItem(std::string camp);

}
#endif