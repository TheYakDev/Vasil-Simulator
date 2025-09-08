
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include "VasilFriends.hpp"
#include "utility.hpp"






void Vasil_Program();

using std::string;
using std::cout;
using std::cin;


bool debug = true;//fai debug dopo (nome utente per debug dev) if User.name == "dev" {debug = true}

/*********************************************************************************************************************************************/

int main(){

    srand(time(0));

user User;
User.name;

//prima domanda *******************************************************************************************************************************

clearScreen();
printf("*********************************************************\n");
printf("Ciao utente benvenuto!\n");

do 
{
    printf("Inserisci qua il tuo nome (max 15 caratteri): ");
    getline(cin, User.name);
    User.name;

} while(User.name.length() > 15);


cout<<"Benvenuto  "<<User.name<<" su VasilDos!\n\n";





//seconda domanda**********************************************************************************************************************************

string GUY;

do
{
    cout<<"Con chi vuoi parlare? ( Vasil, Luca(coming soon), Barbagallo(coming maybe ): ";
getline(cin,GUY);
//strLowerCase(GUY);
std::transform(GUY.begin(), GUY.end(), GUY.begin(), ::tolower); //trasforma input tutto in minuscolo

} while (GUY != "vasil");

 if( debug == true) { std::cout<<"strLowerCase output: "<<GUY<<"\n"; }




if(GUY == "vasil")
{
    //vasil viene programmatto su Vasil.cpp
    Vasil_Program();

    

}






return 0;
}//main {}




















