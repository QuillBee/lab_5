//Файл ComplexVector.cpp
//Реализация класса ComplexVector

#include "ComplexVector.h"
using namespace std;

//Конструкторы
ComplexVector::ComplexVector()
{
	this->coordX = 0.0;
	this->coordY = 0.0;
	this->coordZ = 0.0;
}

ComplexVector::ComplexVector(Complex coordX, Complex coordY, Complex coordZ)
{
	this->coordX = coordX;
	this->coordY = coordY;
	this->coordZ = coordZ;
}

ComplexVector::ComplexVector(Complex coordX, Complex coordY)
{
	this->coordX = coordX;
	this->coordY = coordY;
	this->coordZ = 0.0;
}

ComplexVector::ComplexVector(Complex coordX)
{
	this->coordX = coordX;
	this->coordY = 0.0;
	this->coordZ = 0.0;
}

ComplexVector::ComplexVector(ComplexVector & b)
{
	this->coordX = b.coordX;
	this->coordY = b.coordY;
	this->coordZ = b.coordZ;
}

//Деструктор
ComplexVector::~ComplexVector()
{
}

//Сеттеры и геттеры
void ComplexVector::set_coordX(Complex coordX)
{
	this->coordX = coordX;
	return;
}

void ComplexVector::set_coordY(Complex coordY)
{
	this->coordY = coordY;
	return;
}

void ComplexVector::set_coordZ(Complex coordZ)
{
	this->coordZ = coordZ;
	return;
}

Complex ComplexVector::get_coordX()
{
	return this->coordX;
}

Complex ComplexVector::get_coordY()
{
	return this->coordY;
}

Complex ComplexVector::get_coordZ()
{
	return this->coordZ;
}

//Перегрузка операций
/*ComplexVector& ComplexVector::operator+(ComplexVector& second)
{
	return *new ComplexVector(coordX + second.get_coordX(), coordY + second.get_coordY(), coordZ + second.get_coordZ());
}*/

/*Complex& Complex::operator*(Complex& second)
{
	return *new Complex(re * second.get_re() - im * second.get_im(), re * second.get_im() + im * second.get_re());
}

const Complex& Complex::operator=(const Complex& right)
{
	this->re = right.re;
	this->im = right.im;
	return *this;
}
*/
//Работа с потоками ввода и вывода