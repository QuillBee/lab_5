// Файл Complex.cpp
// Реализация класса Complex

#include "Complex.h"
using namespace std;

// Конструкторы
Complex::Complex()
{
	this->re = 0.0;
	this->im = 0.0;
}

Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}

Complex::Complex(double re)
{
	this->re = re;
	this->im = 0.0;
}

Complex::Complex(Complex &b)
{
	this->re = b.re;
	this->im = b.im;
}

//Деструктор
Complex::~Complex()
{
}

// Сеттеры и геттеры
void Complex::set_re(double re)
{
	this->re = re;
	return;
}

void Complex::set_im(double im)
{
	this->im = im;
	return;
}

double Complex::get_re()
{
	return this->re;
}

double Complex::get_im()
{
	return this->im;
}

// Перегрузка операций 
Complex& Complex::operator+(Complex & second)
{
	return * new Complex (re + second.get_re(), im + second.get_im());
}

Complex& Complex::operator*(Complex & second)
{	
	return * new Complex (re * second.get_re() - im * second.get_im(), re * second.get_im() + im * second.get_re());
}

const Complex& Complex::operator=(const Complex & right)
{
	this->re = right.re;
	this->im = right.im;
	return *this;
}

// Работа с потоками ввода и вывода
ostream& operator<<(ostream & cout, Complex & a)
{
	cout << a.re;
	if (a.im >= 0.0)
		cout << "+";
	cout << a.im << "i";
	return cout;
}

istream& operator>>(istream & cin, Complex & a)
{
	cin >> a.re >> a.im;
	return cin;
}