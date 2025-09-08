

extern bool debug;

#include "VasilFriends.hpp"



using std::cout;

extern void clearScreen();


/*divido in mood Vasil: Chill ,Freaky, Arrabiato.*
Quando l'utente lo saluta sceglie a random su 3 possibili saluti che determinano il mood
 
L'utente dovrà parlare chill,freaky,arrabiato, spaventato con un flag ad ogni messaggio
*/

//


//sono 4 FRASI PER TIPO!!

//extern utility.hpp;

void randGreet();

void Vasil_Program()
{

    Guys Vasil;

    Vasil.name = "Vasil";
    std::string vasilPov = "Vasil: ";

       

    

    

   
    //inizio Vasil**************************************************************************************************************************************************
   

       clearScreen();//mette l'output in alto a sinistra
    printf("********************************************* \n VASIL \n\n");

    Vasil.randMood();
    Vasil.frasi_saluti[0] = "ciAo🤗\n";
    Vasil.frasi_saluti[1] = "Cziao🥵\n";
    Vasil.frasi_saluti[2] = "Uha.. ahh 👺\n";
    Vasil.frasi_saluti[3] = "Zz-zonO... Vazìl..🫣 😖\n";

    cout<<vasilPov<<Vasil.frasi_saluti[Vasil.mood];

    if( debug == true){ cout<<"debug: Vasil mood: "<< Vasil.mood<<"\n"; }
    
   bool gameloop_Vasil;

   





   
    do
   {













    








    

   }while(gameloop_Vasil);
    




     
    
    

    
}//fun end




