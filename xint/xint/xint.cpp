// xint.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "XInt.h"



XInt::XInt(string number){
	validInteger = ValidateInt(number);
	if (!validInteger) {
		std::cout << "Could not convert string into a valid integer. Try again, bitch!\n";
		return;
	}
	d = ParseString(number);
}


XInt::~XInt(){
}

char* XInt::ParseString(string numberstring) {
	char* data = new char[1];
	unsigned int i = strlen(numberstring.c_str());
	std::cout << "int length : " << i << endl;
	while (i-- > 0) {

	}



	return new char();
}

//XInt x3 = XInt("10edfwefwe34.0000");
bool XInt::ValidateInt(string n){
	unsigned int l = n.length();
	unsigned int nzbd = 0;
	unsigned int md = 0; //max dots
	std::cout << "string length : " << l << endl;
	while (l-- > 0) {
		if (n[l] == '.') {
			++md;
			if (nzbd > 0 || md > 1) return false;
		}
		else {
			//std::cout << n[l] << endl;
			if (n[l] != 48) ++nzbd; //48 == 0
			if (n[l] > 47 && n[l] < 58) continue;
			return false;
		}
	}
	return true;
}