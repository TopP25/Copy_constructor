#pragma once
#include <iostream>
using namespace std;
class Copy {
	int num;
	int denum;
public:
	Copy(int num, int denum) : num{ num }, denum { denum } {
		cout << "Copy constructed for" << this << endl;
	}
	Copy() : Copy(1, 1){}
	~Copy(){
		cout << "Copy destructed for " << this << endl;
	}
	void print() {
		cout << '(' << num << '/' << denum << ')' << endl;
	}
};