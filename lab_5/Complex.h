// Файл Complex.h
// Объявление класса Complex 

#pragma once
#include <iostream>
using namespace std;

class Complex
{
private:
	//double re, im;

public:
	double re, im;
	// Конструкторы
	Complex();						// Конструктор по умолчанию
	Complex(double re, double im);	// Конструктор с двумя параметрами - действительной и мнимой частями
	Complex(double re);				// Конструктор с одним параметром - действительной частью
	Complex(Complex &b);			// Конструктор копирования

	// Деструктор
	~Complex();

	// Сеттеры и геттеры
	void set_re(double re);
	void set_im(double im);
	double get_re();
	double get_im();

	// Перегруженные операции
    Complex& operator+(Complex & second);
	Complex& operator*(Complex & second);
	const Complex& operator=(const Complex & right);

	// Работа с потоками ввода и вывода
	friend ostream& operator<<(ostream & cout, Complex & a);
	friend istream& operator>>(istream & cin, Complex & a);

};


