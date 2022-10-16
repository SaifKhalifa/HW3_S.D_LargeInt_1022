#pragma once
#include<iostream>
#include<string>
#include"LargeInteger.h"
using namespace std;

/* * * * *          Constructors       * * * * */
LargeInteger::LargeInteger(string  no = "")
{
	size_t len = no.size();
	for (size_t i = 0; i < len; i++)
	{
		if (!isdigit(no[i]))
			cout << "\aERROR!, No digits!\n";
		else
			number.addLast(no[i] - 48);
	}
}

LargeInteger::LargeInteger(LargeInteger& L)
{
	L.number = this->number;
}

LargeInteger::~LargeInteger()
{
	this->number.~Slist();
}

void LargeInteger::print()
{
	number.displayList();
}

bool LargeInteger::setNumber(string str)
{
	if (str.empty())
		return false;
	else
	{
		size_t len = str.size();

		for (size_t i = 0; i < len; i++)
		{
			if (!isdigit(str[i]))
				cout << "\aERROR!, No digits!\n";
			else
				number.addLast(str[i]);
		}
		cout << "\aNUMBER IS SET!\n";
		return true;
	}
}

/* * * * *          Read & Write       * * * * */
//istream& LargeInteger::operator>>(istream& in, LargeInteger& no)

//ostream& LargeInteger::operator<< (ostream& out, const LargeInteger& no)

/* * * * *          Arithmatic operations       * * * * */
//LargeInteger LargeInteger::operator-(const LargeInteger& L)

//LargeInteger LargeInteger::operator*(const LargeInteger& L)

/* * * * *          Direct assignment       * * * * */
//const& LargeInteger::operator=(const LargeInteger& L)

/* * * * *          Comparison operators       * * * * */
//bool LargeInteger::operator==(const LargeInteger& L)

//bool LargeInteger::operator<(const LargeInteger& L)

//bool LargeInteger::operator>(const LargeInteger& L)