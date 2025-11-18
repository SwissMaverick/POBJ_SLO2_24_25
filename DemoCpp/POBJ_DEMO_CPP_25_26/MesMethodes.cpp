//-----------------------------------------------------------------------------------//
// Project Name			: POBJ DEMO C++
// File Name	 		: demoSLO.cpp
// creation date 		: 21.11.2023
// modification date	: 18.11.2025
//
// Auteur 				: Philou (Ph. Bovey)
// 
// Version				: 1.1
//
// Description          : functions no linked at a class 
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
//-- standard libraries --// 
#include <iostream>				// for mananing the input - output stream
#include <string>				// using the string type object 

//-- personnal libraries --// 
#include "ClassDemo.h"
#include "mesFcts.h"


/* ----------------------------------------------------------------------------------
// Function Name		: Convertir
// input parameters		: valAConv (integer 4o - signed) 
// output parameters	: 
// reference parameters : binaire (table of 100 case - integer 8o - signed) 
// descrription			: 
---------------------------------------------------------------------------------- */
void Convertir(int valAConv, char (&binaire)[100]) 
{
	int reste = 1; 
	int index = 0; 


	while (valAConv != 0)
	{
		reste = valAConv % 2;
		valAConv = valAConv >> 1; 

		if (reste == 1)
			binaire[index] = 0; 
		else 
			binaire[index] = 1;

		index++; 
	}
}


/* ----------------------------------------------------------------------------------
// Function Name		: Diviser 
// input parameters		: v1 => var1 (real 4o), var2 (integer 4o signed) 
//						  v2 => var1 (real 4o), var2 (real 4o) 
//						  v3 => var1 (real 8o), var2 (real 8o) 
// output parameters	: v1 => -
//						  v2 => integer 4o signed
//						  v3 => same think that the v1 
// reference parameters : v1 => result (real 4o) 
//					      v2 => same think that the v1 
//						  v3 => result (integer 4o signed) 
// descrription			: performs a simple division 
// 
// remark				: the various functions below are overloaded 
---------------------------------------------------------------------------------- */
//-- primary function (v1)
void Diviser(float var1, int var2, float &result)
{
	result = var1 / var2;
}

//-> overloaded function (v2)
int Diviser(float var1, float var2, float &result)
{
	return result = var1 / var2;
}

//-> overloaded function (v3)
int Diviser(int &result, double var1, double var2)
{
	return result = var1 / var2;
}

//-- A TESTER avec pointeur null --// 
/*void Diviser(void* pt, int var2, float& result)
{
	result = (int*) *pt / var2;
}*/