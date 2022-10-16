#pragma once
#include<string>
#include"SList.h"
using namespace std;

class LargeInteger
{
public:
	/* * * * *          Constructors       * * * * */
	LargeInteger(string  no);
	LargeInteger(LargeInteger& L);
	~LargeInteger();

	void print();
	bool setNumber(string str);

	/* * * * *          Read & Write       * * * * */
	//istream& operator>>(istream& in, LargeInteger& no);
	//ostream& operator<< (ostream& out, const LargeInteger& no);

	/* * * * *          Arithmatic operations       * * * * */
	LargeInteger  operator+(const LargeInteger& L);
	LargeInteger operator-(const LargeInteger& L);
	LargeInteger operator*(const LargeInteger& L);

	/* * * * *          Direct assignment       * * * * */
	const LargeInteger& operator=(const LargeInteger& L);

	/* * * * *          Comparison operators       * * * * */
	bool operator==(const LargeInteger& L);
	bool operator < (const LargeInteger & L);
	bool operator > (const LargeInteger & L);


private:
	Slist <short int>    number;

};