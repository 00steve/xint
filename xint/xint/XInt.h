#pragma once


#include <string>
#include <iostream>

using namespace std;


class XInt{
private:
	unsigned int l; //the length of the byte array that represents the number
	char *d;//the byte array that represents the data in the x integer


	bool ValidateInt(string i);
	bool validInteger;

public:
	XInt(string number);
	~XInt();
};

