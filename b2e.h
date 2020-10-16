#ifndef B2E_HEADER
#define B2E_HEADER
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#define compile(...) "gcc -O3 " + __VA_ARGS__  + " -o " + __VA_ARGS__ + ".exe " + " -Wno-implicit";
void rwFile(std::string in, std::string out);
inline bool fileExists(const std::string &file);
#endif