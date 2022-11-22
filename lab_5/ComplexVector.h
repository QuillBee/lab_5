//Файл ComplexVector.h
//Объявление класса ComplexVector

#pragma once
#include "Complex.h"

class ComplexVector
{
private:
	Complex coordX, coordY, coordZ;

public:
	//Конструкторы
	ComplexVector();                                                 //Конструктор по умолчанию
	ComplexVector(Complex coordX, Complex coordY, Complex coordZ);   //Конструктор с тремя параметрами - первой, второй и третьей координатами(x, y, z)
	ComplexVector(Complex coordX, Complex coordY);                   //Конструктор с двумя параметрами - первой и второй координатами(x, y)
	ComplexVector(Complex coordX);                                   //Конструктор с одним параметром - первой координатой(x)
	ComplexVector(ComplexVector & b);			                     //Конструктор копирования

	//Деструктор
	~ComplexVector();

	//Сеттеры и геттеры
	void set_coordX(Complex coordX);
	void set_coordY(Complex coordY);
	void set_coordZ(Complex coordZ);
	Complex get_coordX();
	Complex get_coordY();
	Complex get_coordZ();

	//Перегруженные операции
	//ComplexVector& operator+(ComplexVector& second);
	//Complex& operator*(ComplexVector& second);
	//const ComplexVector& operator=(const Complex& right);

	//Работа с потоками ввода и вывода
};

