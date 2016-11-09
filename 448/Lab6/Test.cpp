/**
*	@author Rony Singh
*	@date 11/2/2016
*	@file Test.cpp
*/
#include "Test.h"
#include <iostream>
#include <vector>
Test::Test()
{

}
Test::~Test()
{

}
void Test::runTests()
{
    //Test results for return types
    bool Test1=checkIsEmptyReturn();
    bool Test2=checkSizeReturn();
    bool Test3=checkSearchReturn();
    bool Test4=checkRemoveBackReturn();
    bool Test5=checkRemoveFrontReturn();
    //Test results for PreConditions
    bool Test6=checkSearchPre();
    bool Test7=checkAddBackPre();
    bool Test8=checkAddFrontPre();
    //Test results for method working as intended
    bool Test9=checkIsEmptyPost();
    bool Test10=checkSizePost();
    bool Test11=checkSearchPost();
    bool Test12=checkAddBackPost();
    bool Test13=checkAddFrontPost();
    bool Test14=checkRemoveBackPost();
    bool Test15=checkRemoveFrontPost();

    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "Running Test Now - True/False = Passed/Failed" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "Checking Returns - Check for correct return type" << std::endl;
    std::cout << "----------------" << std::endl;

    std::cout << "Test1: checkIsEmptyReturn: " << std::boolalpha << Test1 << std::endl;
    std::cout << "Test2: checkSizeReturn: " << std::boolalpha << Test2 << std::endl;
    std::cout << "Test3: checkSearchReturn: " << std::boolalpha << Test3 << std::endl;
    std::cout << "Test4: checkRemoveBackReturn: " << std::boolalpha << Test4 << std::endl;
    std::cout << "Test5: checkRemoveFrontReturn: " << std::boolalpha << Test5 << std::endl;

    std::cout << "----------------------" << std::endl;
    std::cout << "Checking PreConditions - Check if correct parameter is taken" << std::endl;
    std::cout << "----------------------" << std::endl;

    std::cout << "Test6: checkSearchPre: " << std::boolalpha << Test6 << std::endl;
    std::cout << "Test7: checkAddBackPre: " << std::boolalpha << Test7 << std::endl;
    std::cout << "Test8: checkAddFrontPre: " << std::boolalpha << Test8 << std::endl;

    std::cout << "-----------------------" << std::endl;
    std::cout << "Checking PostConditions - Various Test to check functionality" << std::endl;
    std::cout << "-----------------------" << std::endl;

    std::cout << "Test9: checkIsEmptyPost: " << std::boolalpha << Test9 << std::endl;
    std::cout << "Test10: checkSizePost: " << std::boolalpha << Test10 << std::endl;
    std::cout << "Test11: checkSearchPost: " << std::boolalpha << Test11 << std::endl;
    std::cout << "Test12: checkAddBackPost: " << std::boolalpha << Test12 << std::endl;
    std::cout << "Test13: checkAddFrontPost: " << std::boolalpha << Test13 << std::endl;
    std::cout << "Test14: checkRemoveBackPost: " << std::boolalpha << Test14 << std::endl;
    std::cout << "Test15: checkRemoveFrontPost: " << std::boolalpha << Test15 << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "After Test Analysis" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "isEmpty, addBack, size, and both removeFront and removeBack do not work."<< std::endl;
    std::cout << "isEmpty does not return false if there is an item in the list."<< std::endl;
    std::cout << "addBack does not correctly add to the back of the list but instead to the front."<< std::endl;
    std::cout << "removeBack does not work correctly."<< std::endl;
    std::cout << "removeFront does not work correctly."<< std::endl;
    std::cout << "Because of this we discover size doesn't decrement after a remove but work for increments."<< std::endl;
}
/*
*Checking the Returns----------------------------------------------------
*/
//These methods just check the return types for the functions that returned something
bool Test::checkIsEmptyReturn()
{
    bool passed = false;        //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    if(list.isEmpty()==true)    //Checks if list is empty
    {
        passed=true;            //Passed is true
    }
    return(passed);             //Return passed
}
bool Test::checkSizeReturn()
{
    bool passed = false;        //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    if(list.isEmpty()==true)    //If list is empty.
    {
        if(list.size()==0)      //And size is zero.
        {
            passed=true;        //Passed is true.
        }
    }
    list.addFront(1);           //Adding to front because it works.
    if(list.size()!=1)          //Size must be 1.
    {
        passed=false;           //Else false
    }
    return(passed);             //Return passed
}
bool Test::checkSearchReturn()
{
    bool passed = false;        //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    list.addFront(1);           //Adding to front
    if(list.search(1)==true)    //Search
    {
        passed=true;            //Passed is true because it returns correctly.
    }
    return(passed);             //Return passed
}
bool Test::checkRemoveBackReturn()
{
    bool passed;                //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    if(list.removeBack()==false)//Remove on empty list.
    {
        passed=true;            //Returns correctly so true.
    }
    return(passed);             //Return passed
}
bool Test::checkRemoveFrontReturn()
{
    bool passed;                //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    if(list.removeFront()==false)//Remove on empty list.
    {
        passed=true;            //Returns correctly so true.
    }
    return(passed);             //Return passed
}
/*
*Checking the PreConditions----------------------------------------------------
*/
//These methods made sure the correct parameter was taken in.
bool Test::checkSearchPre()
{
    bool passed = false;        //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    if(list.search(0)==false)   //Checking if it takes correct type.
    {
        passed=true;            //If it does it's true.
    }
    return(passed);             //Return passed
}
bool Test::checkAddBackPre()
{
    bool passed = false;        //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    list.addBack(0);
    if(list.search(0)==true)    //Checking if it takes correct type.
    {
        passed=true;            //If it does it's true.
    }
    return(passed);             //Return passed
}
bool Test::checkAddFrontPre()
{
    bool passed = false;        //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    list.addFront(0);
    if(list.search(0)==true)    //Checking if it takes correct type.
    {
        passed=true;            //If it does it's true.
    }
    return(passed);             //Return passed
}
/*
*Checking the PostConditions----------------------------------------------------
*/
bool Test::checkIsEmptyPost()
{
    bool passed = false;        //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    if(list.isEmpty()==true)    //If empty list is empty.
    {
        passed=true;            //Passed is true.
    }
    list.addFront(1);           //Add a element.
    if(list.isEmpty()==true)    //Empty should false.
    {
        passed=false;           //If not passed is false.
    }
    return(passed);             //Return passed
}
bool Test::checkSizePost()
{
    bool passed = false;        //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    if(list.size()==0)          //If size is zero on empty list.
    {
        passed=true;            //Passed is true.
    }
    list.addFront(1);           //Add element
    if(list.size()!=1)          //Size should be 1
    {
        passed=false;           //Else false
    }
    list.addBack(2);            //Add another element
    if(list.size()!=2)          //Size should be 2
    {
        passed=false;           //Else false
    }
    list.addFront(1);           //Add more elements
    list.addBack(2);            //Add more elements
    if(list.size()!=4)          //Size should be 4
    {
        passed=false;           //Else false
    }
    list.removeFront();        //Remove elements
    list.removeBack();         //Remove elements
    if(list.size()!=2)          //Size should be 2
    {
        passed=false;           //Else false
    }
    return(passed);             //Return passed

}
bool Test::checkSearchPost()
{
    bool passed = false;        //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    if(list.search(0)==false)   //Checking empty list
    {
        passed=true;            //Should be false
    }
    list.addFront(1);           //Add element
    if(list.search(1)==false)   //Search, should be true
    {
        passed=false;           //If can't be found is false
    }
    if(list.search(2)==true)    //Search for element not in list
    {
        passed=false;           //Passed is false
    }
    return(passed);             //Return passed
}
bool Test::checkAddBackPost()
{
    bool passed=false;          //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    list.addFront(1);           //Add elements
    list.addBack(2);
    std::vector<int> myVector = list.toVector(); //Create vector and get vector
    if(myVector.back()==2)      //Back should be 2
    {
        passed=true;            //If it is, true
    }
    if(myVector.front()==2)     //Front should be 1
    {
        passed=false;           //If not, false
    }
    return(passed);             //Return passed
}
bool Test::checkAddFrontPost()
{
    bool passed = false;        //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    list.addFront(1);           //Add element
    std::vector<int> myVector = list.toVector(); //Create vector and get vector
    if(myVector.front()==1)     //Front should be 1
    {
        passed=true;            //If it is, true
    }
    else                        //Else false
    {
        passed=false;
    }
    list.addFront(2);           //Add element
    myVector = list.toVector(); //Revector
    if(myVector.front()==2)     //Front should be 2
    {
        passed=true;            //If it is, true
    }
    else
    {
        passed=false;           //Else false
    }
    return(passed);             //Return passed
}
bool Test::checkRemoveBackPost()
{
    bool passed;        //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    if(list.removeBack()==false)//Remove on empty list
    {
        passed=true;
    }
    list.addFront(1);           //Add elements
    list.addFront(2);
    list.addFront(3);
    list.removeBack();          //Remove one
    std::vector<int> myVector = list.toVector(); //Create vector and get vector
    if(myVector.size()==2)      //Checking if it removed correcly.
    {
        passed=true;            //If it did, true
    }
    if(myVector.back()==1)      //Checking the back, should be 2
    {
        passed=false;           //If it's not, false
    }
    return(passed);             //Return passed
}
bool Test::checkRemoveFrontPost()
{
    bool passed;        //Creating a variable to be returned
    LinkedListOfInts list;      //Creating a list object.
    if(list.removeFront()==false)
    {
        passed=true;
    }
    list.addFront(1);           //Add elements
    list.addFront(2);
    list.addFront(3);
    list.removeFront();         //Remove one
    std::vector<int> myVector = list.toVector(); //Create vector and get vector
    if(myVector.size()==2)      //Checking if it removed correcly.
    {
        passed=true;            //If it did, true
    }
    if(myVector.front()==3)     //Checking the front, should be 2
    {
        passed=false;           //If it's not, false
    }
    return(passed);             //Return passed
}
