#ifndef _Exception_H_
#define _Exception_H_

#include <exception>
using namespace std;

class GPrazna : exception {
public:
	const char* what() const override {
		return "Lista je prazna!";
	}
};

class GPostfix : exception {
public:
	const char* what() const override {
		return "Greska postfix!";
	}
};

#endif