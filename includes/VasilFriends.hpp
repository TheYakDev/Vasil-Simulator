#pragma once 
#include <iostream>
#include <random>
#include <stdio.h>



using std::string;

struct user
{
string name;

};

class Guys 
{
    public:

    string name = "err 404 (reason 104) :(";
    string frasi_saluti[4];
    string frasi_argomenti_Chill[4] = {"bho0ChillFrasi :(\n" , "bho1ChillFrasi :(\n" , "bho2ChillFrasi :(\n", "bho3ChillFrasi :(\n"};
    string frasi_argomenti_Freaky[4] = {"bho0FreakyFrasi :(\n" , "bho1FreakyFrasi :(\n" , "bho2FreakyFrasi :(\n", "bho3FreakyFrasi :(\n"};
    string frasi_argomenti_Angry[4] = {"bho0AngryFrasi :(\n" , "bho1AngryFrasi :(\n" , "bho2AngryFrasi :(\n", "bho3AngryFrasi :(\n"};
    string guyAscii[99][3];


    bool isChill = false;
    bool isFreaky = false;
    bool isAngry = false;
    bool isScared = false;


    int mood;

    int randMood()
    {
        
         mood = rand() % 4; //numero tra 0 e 3

        switch(mood)
        {
        case 0: 
        isChill = true;
        break;

        case 1:
        isFreaky = true;
        break;

        case 2:
        isAngry = true;
        break;

        case 3:
        isScared = true;
        break;

        default:
        std::cout<<"err: errore durante la generazione del mood (randMood()) :(";
        }
        

        return 0;
    }

 
};