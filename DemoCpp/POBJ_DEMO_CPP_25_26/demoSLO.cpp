/*----------------------------------------------------------------------------------
// Projet Name 			: POBJ_DemoCPP_25_26
// File Name 			: demoSLO.cpp
// Creation Date 		: 19.09.2024
// Modification Date	: 18.11.2025
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 1.4
//
// Description          : demo for SLO2's team  
//						 
// Remarks				: 
//----------------------------------------------------------------------------------*/

//-- standart libraries --// 
#include <iostream>			// equivalent at the <stdio.h> in C
#include <string>			// for the objects linked to the string 
#include <cstdint>			// to use a C library -> here the normalised type 

//-- personnal libraries -> class --//
#include "mesFcts.h"

//-- main programme -> entry point of the programm --//
void main()
{
	//-- variable's declaration --//
	//-- static memory -> "ROM" 
	//-- primitive type  --// 
	//-- integer --//
	bool valB;			//-> 1 octet			//-> true ou false 
	char valC;			//-> 1 octet
	short valS;			//-> 2 octet
	int valI, valX;		//-> 4 octet 
	long valL;			//-> 4 octet 
	long long valLL;	//-> 8 octet
	
	//-- example with normalized type --// 
	int8_t valI2;

	//-- real --//
	float  valF;		//-> 4 octet 
	double valD;		//-> 8 octet 

	bool A = true;		//-> not linked to a numeric value

	//-- declaration of table (static memory) --// 
	int tbDemo[10]; 

	//-- pointer declaration --// 
	int* ptTBdemo;					//-> primitive type 
	std::string* ptdemo;			//-> object type 

	//-- using the dynamique memories with a primitive variable --//
	ptTBdemo = new int[10]; 
	ptdemo = new std::string; 

	//-- value assignment on a variable -> static memory --// 
	valI = 10;

	//-- object--// 
	//description : -> class -> objet -> () <- constructor calling 
	std::string chaine("hello"), chaine2;

	//-- object instantiation --// 
	chaine = "HELLO"; 
	chaine2 = "SLO"; 

	//-- use of an object -> methode utilisation 
	//-> lenth of character string 
	valI = chaine.length(); 

	//-> search the occurence number, here in a string with find methode 
	valI = chaine.find("on");

	//-- msg user --// 
	std::cout << chaine << " " << chaine2 << std::endl;
	std::cout << "HELLO SLO !! \n" << std::endl;

	//-- function calling --// 
	Diviser(10, 5, valF); 
	Diviser(valI, 5.5); 

	//-- example to take a keyboard value --//
	std::cin >> valI;		// integer value pour valeur entière 
	std::cin >> valF;		// real value   
	std::cin >> chaine;		// string with an object 
	std::cin >> valC; 		// character value

	//-- object copies --// 
	chaine2 = chaine;			

	// REMARQUE : static en C : garder la valeur d'une variable dans une fct 
	//            static en C++ : pas besoin d'objet pour utiliser des méthodes ou attributs static 

	//-- dynamique

	system("pause"); 
}




