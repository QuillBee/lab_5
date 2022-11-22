// ���� Complex.h
// ���������� ������ Complex 

#pragma once
#include <iostream>
using namespace std;

class Complex
{
private:
	//double re, im;

public:
	double re, im;
	// ������������
	Complex();						// ����������� �� ���������
	Complex(double re, double im);	// ����������� � ����� ����������� - �������������� � ������ �������
	Complex(double re);				// ����������� � ����� ���������� - �������������� ������
	Complex(Complex &b);			// ����������� �����������

	// ����������
	~Complex();

	// ������� � �������
	void set_re(double re);
	void set_im(double im);
	double get_re();
	double get_im();

	// ������������� ��������
    Complex& operator+(Complex & second);
	Complex& operator*(Complex & second);
	const Complex& operator=(const Complex & right);

	// ������ � �������� ����� � ������
	friend ostream& operator<<(ostream & cout, Complex & a);
	friend istream& operator>>(istream & cin, Complex & a);

};


