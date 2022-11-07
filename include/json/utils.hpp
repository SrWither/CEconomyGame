#pragma once
#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>

namespace GameJson{

void writeProp(std::string camp, long long value);
void writeName(std::string name);
void writeItem(std::string camp, long long value);

long long getData(std::string camp);
std::string getName();
long long getItem(std::string camp);

}
#endif