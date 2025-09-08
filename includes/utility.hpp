#pragma once 
#include <iostream>
#include <stdio.h>
#include <algorithm>



 void clearScreen() // pulisce lo schermo e ti mette in alto a sinistra
{
    
    std::cout << "\033[2J\033[H" << std::flush;
}


std::string strLowerCase(std::string s)//trasforma la stringa tutto in minuscolo
{
std::transform(s.begin(), s.end(), s.begin(), ::tolower); 
return s;
}

std::string strUpperCase(std::string S)//trasforma la stringa tutto in maiuscolo
{
std::transform(S.begin(), S.end(), S.begin(), ::toupper); 
return S;
}

string summonError(){return "debug err :(/n";}

