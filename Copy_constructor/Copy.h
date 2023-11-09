#pragma once
#include <iostream>
using namespace std;
class Copy {
	int num;
	int denum;
public:
	Copy(int num, int denum) : num{ num }, denum { denum } {
		cout << "Copy constructed for " << this << endl;
	}
	Copy() : Copy(1, 1){}
	Copy(const Copy& copy) : num{ copy.num }, denum{ copy.denum } {
		cout << "Copy constructed for " << this << endl;
	}
	~Copy(){
		cout << "Copy destructed for " << this << endl;
	}
	void print() {
		cout << '(' << num << '/' << denum << ')' << endl;
	}
};