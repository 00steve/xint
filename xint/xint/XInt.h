#pragma once


#include <string>
#include <iostream>

using namespace std;


class XInt{
private:
	unsigned int l; //the length of the byte array that represents the number
	char* d;//the byte array that represents the data in the x integer

	char* ParseString(string numberstring); // given a string int, convert it to a char 
	//array that has all of the information, but can be any length

	bool ValidateInt(string i);
	bool validInteger;

public:
	XInt(string number);
	~XInt();
};

