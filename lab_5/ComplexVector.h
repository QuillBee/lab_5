//���� ComplexVector.h
//���������� ������ ComplexVector

#pragma once
#include "Complex.h"

class ComplexVector
{
private:
	Complex coordX, coordY, coordZ;

public:
	//������������
	ComplexVector();                                                 //����������� �� ���������
	ComplexVector(Complex coordX, Complex coordY, Complex coordZ);   //����������� � ����� ����������� - ������, ������ � ������� ������������(x, y, z)
	ComplexVector(Complex coordX, Complex coordY);                   //����������� � ����� ����������� - ������ � ������ ������������(x, y)
	ComplexVector(Complex coordX);                                   //����������� � ����� ���������� - ������ �����������(x)
	ComplexVector(ComplexVector & b);			                     //����������� �����������

	//����������
	~ComplexVector();

	//������� � �������
	void set_coordX(Complex coordX);
	void set_coordY(Complex coordY);
	void set_coordZ(Complex coordZ);
	Complex get_coordX();
	Complex get_coordY();
	Complex get_coordZ();

	//������������� ��������
	//ComplexVector& operator+(ComplexVector& second);
	//Complex& operator*(ComplexVector& second);
	//const ComplexVector& operator=(const Complex& right);

	//������ � �������� ����� � ������
};

