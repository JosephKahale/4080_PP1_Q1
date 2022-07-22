#pragma once
#ifndef REGSTACKDYN
#define REGSTACKDYN

class RegStackDyn {
private:
	int xVal;
	int yVal;

public:
	RegStackDyn(int, int);
	int getxVal() const;
	int getyVal() const;
	void setxVal(int);
	void setyVal(int);
};

#endif // !REGSTACKDYN
