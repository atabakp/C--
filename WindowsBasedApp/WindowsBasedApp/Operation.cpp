#include "Operation.h"



Operation::Operation()
{
}

void Operation::clear()
{
	this->operand1 = 0;
	this->operand2 = 0;
	this->result = 0;

}

void Operation::setOperand1(double val)
{
	this->operand1 = val;
}

double Operation::getOperand1()
{
	return this->operand1;
}

void Operation::setOperand2(double val)
{
	this->operand2 = val;
}

double Operation::getOperand2()
{
	return this->operand2;
}

double Operation::sum(double a, double b)
{
	this->result = a + b;
	return this->result;
}

double Operation::sum()
{
	this->result = this->operand1 + this->result;
	return this->result;
}

double Operation::substract(double a, double b)
{
	this->result = a - b;
	return this->result;
}

double Operation::substract()
{
	this->result = this->operand1 - this->result;
	return this->result;
}

double Operation::multiple(double a, double b)
{
	this->result = a * b;
	return this->result;
}

double Operation::multiple()
{
	this->result = this->operand1 * this->result;
	return this->result;
}

double Operation::division(double a, double b)
{
	this->result = a / b;
	return this->result;
}

double Operation::division()
{
	this->result = this->operand1 / this->result;
	return this->result;
}

void Operation::setResult(int val)
{
	this->result = val;
}

double Operation::getResult()
{
	return this->result;
}

bool Operation::isPrime(int n)
{
	int i = 5;
	if (n <= 1)
		return false;
	else if (n <= 3)
		return true;
	else if (n % 2 == 0 || n % 3 == 0)
		return false;
	while (i*i <= n) {
		if (n%i == 0 || n % (i + 2) == 0)
			return false;
		i = i + 6;
	}
	return true;
}

void Operation::calculate()
{
	
	switch (mode)
	{
	case'+':
		result = operand1 + operand2;
		break;
	case'-':
		result = operand1 - operand2;
		break;
	case'x':
		result = operand1 * operand2;
		break;
	case'/':
		result = operand1 / operand2;
		break;

	}
}
