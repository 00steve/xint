// xint.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "XInt.h"



XInt::XInt(string number){
	//check that number is legit
	validInteger = ValidateInt(number);
	std::cout << "valid integer :" << validInteger << endl;
}


XInt::~XInt(){
}



bool XInt::ValidateInt(string n){
	std::cout << "\nVALIDATE INT ():\n";
	unsigned int l = n.length();
	std::cout << "string : " << n << endl;
	std::cout << "length: " << l << endl;
	unsigned int md = 0; //max dots
	while (l-- > 0) {
		//std::cout << "print [" << n[l] << endl;
		if (n[l] == '.') { 
			std::cout << "has a period\n";
			std::cout << "md : " << md << endl;
			if (md++ == 1) return false;
		}
		else {
			std::cout << "number after : " << n[l] << endl;
			if (n[l] > 47 && n[l] < 58) continue;
		}
		//return false;
		//return false;
	}
	return true;
}