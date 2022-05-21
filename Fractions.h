#include<iostream>
#pragma once
using namespace std;
class Fractions
{
private:
	int num;
	int den;
	int n;
public:
	Fractions(int num, int den) {
		this->num = num;
		this->den = den;
		this->n = n;
	}
	Fractions() {

	}

	void print() {
		cout << num << "/" << den << endl;
	}
	Fractions add(Fractions b1, Fractions b2) {            //сложение
		Fractions b3;
		b3.num = b1.num + b2.num;
		b3.den = b1.den + b2.den;
		if (b3.num / b3.den >= 1) {
			b3.n = b3.num / b3.den;
			b3.num -= b3.n * b3.den;
		}
		else {
			b3.n = 0;
		}
		for (int i = 2; i <= 9; i++) {
			if (b3.num % i == 0 && b3.den % i == 0) {
				b3.num = b3.num / i;
				b3.den = b3.den / i;
			}
		}
		return b3;
	}
	Fractions sub(Fractions v1, Fractions v2) {            //разность
		Fractions v3;
		v3.num = v1.num - v2.num;
		v3.den = v1.den - v2.den;
		if (v3.num / v3.den >= 1) {
			v3.n = v3.num / v3.den;
			v3.num -= v3.n * v3.den;
		}
		else {
			v3.n = 0;
		}
		for (int i = 2; i <= 9; i++) {
			if (v3.num % i == 0 && v3.den % i == 0) {
				v3.num = v3.num / i;
				v3.den = v3.den / i;
			}
		}
		return v3;
	}
	Fractions mult(Fractions d1, Fractions d2) {         //умн
		Fractions d3;

		d3.num = d1.num * d2.num;
		d3.den = d1.den * d2.den;
		if (d3.num / d3.den >= 1) {
			d3.n = d3.num / d3.den;
			d3.num -= d3.n * d3.den;
		}
		else {
			d3.n = 0;
		}
		for (int i = 2; i <= 9; i++) {
			if (d3.num % i == 0 && d3.den % i == 0) {
				d3.num = d3.num / i;
				d3.den = d3.den / i;
			}
		}
		return d3;
	}
	Fractions div(Fractions a1, Fractions a2) {            //дел
		Fractions a3;
		a3.num = a1.num * a2.den;
		a3.den = a1.den * a2.num;
		if (a3.num / a3.den >= 1) {
			a3.n = a3.num / a3.den;
			a3.num -= a3.n * a3.den;
		}
		else {
			a3.n = 0;
		}
		for (int i = 2; i <= 9; i++) {
			if (a3.num % i == 0 && a3.den % i == 0) {
				a3.num = a3.num / i;
				a3.den = a3.den / i;
			}
		}
		return a3;
	}
};

