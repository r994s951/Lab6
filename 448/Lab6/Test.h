/**
*	@file Test.h
*	@author Rony Singh
*	@date 11/2/2016
*	@brief A header file for Test class
*/

#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"
#include "Node.h"

class Test
{
	public:
	//
	Test();
	~Test();
	void runTests();
	//Checking the Return Type
	bool checkIsEmptyReturn();
	bool checkSizeReturn();
	bool checkSearchReturn();
	bool checkRemoveBackReturn();
	bool checkRemoveFrontReturn();
	//Checking PreConditions
	bool checkSearchPre();
	bool checkAddBackPre();
	bool checkAddFrontPre();
	//Checking PostConditions
	bool checkIsEmptyPost();
	bool checkSizePost();
	bool checkSearchPost();
	bool checkAddBackPost();
	bool checkAddFrontPost();
	bool checkRemoveBackPost();
	bool checkRemoveFrontPost();
};
#endif
