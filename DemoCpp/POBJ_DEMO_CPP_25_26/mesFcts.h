/*----------------------------------------------------------------------------------
// Projet Name 			: POBJ_DemoCPP_25_26
// File Name 			: mesFcts.h
// Creation Date 		: 18.11.2025
// Modification Date	: xx.xx.20xx
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 0.1
//
// Description          : demo for SLO2's team
//						-> function protoytpes without link with a class 
//
// Remarks				:
//----------------------------------------------------------------------------------*/
#ifndef MES_FCTS_H
#define MES_FCTS_H 

//-- prototype with "surcharge" concept --//
//-- WARNING : if the oupput is only modified, this is not equivalent to on "surcharge"
void Diviser(float var1, int var2, float& result);				// prototype 1
int Diviser(float var1, float var2, float& result);				// prototype 2 -> Surcharge 
int Diviser(int& result, double var1, double var2 = 10);		// prototype 3 -> surcharge and default value
//void Diviser(void* pt, int var2, float& result); 

#endif // !MES_FCTS_H

