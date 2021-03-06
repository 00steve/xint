// xint.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "XInt.h"



XInt::XInt(string number){
	validInteger = ValidateInt(number);
	if (!validInteger) {
		std::cout << "Could not convert string into a valid integer. Try again, bitch!";
		return;
	}

}


XInt::~XInt(){
}



bool XInt::ValidateInt(string n){
	unsigned int l = n.length();
	unsigned int nzbd = 0;
	unsigned int md = 0; //max dots
	while (l-- > 0) {
		if (n[l] == '.') { 
			return !(nzbd > 0 || md++ == 1);
		}
		else {
			if (n[l] != 48) ++nzbd;
			if (n[l] > 47 && n[l] < 58) continue;
			return false;
		}
	}
	return true;
}