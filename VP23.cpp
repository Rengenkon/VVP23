#include <stdio.h>
#include <string>
#include <iostream>

/*
Задание 23.

1. Дан символ C. Вывести два символа, первый из которых предшествует символу C в кодовой таблице, а второй следует за символом C.
2. Дана непустая строка S. Вывести строку, содержащую символы строки S, между которыми вставлено по одному пробелу.
3. Дана строка. Подсчитать количество содержащихся в ней прописных латинских букв.
4. Дан символ C и строка S. Удвоить каждое вхождение символа C в строку S
5. Даны строки S и S0. Найти количество вхождений строки S0 в строку S.

Каждая задача решена в отдельном классе
*/

class z1
{
private:
	char c;

public:
	z1(char ch = ' ') {
		c = ch;
	}

	void foo() {
		printf("'%c'  '%c'  '%c'", c - 1, c, c + 1);
	}

};

class z2
{
private:
	std::string c;

public:
	z2(std::string ch = "") {
		c = ch;
	}

	void foo() {
		for (int i = 0; i < c.size(); i++) {
			std::cout << c[i] << ' ';
		}
	}

};

class z3
{
private:
	std::string c;

public:
	z3(std::string ch = "") {
		c = ch;
	}

	void foo() {
		int k = 0;

		for (int i = 0; i < c.size(); i++) {
			if (islower(c[i])) {
				k++;
			}
		}
		std::cout << "Количество прописных букв " << k;
	}

};

class z4
{
private:
	std::string s;
	char c;

public:
	z4(std::string st = "", char ch = ' ') {
		c = ch;
		s = st;
	}
	void print() {
		std::cout << s;
	}

	void foo() {
		std::string s1;
		s1 = c;
		s1 += c;
		for (int i = s.size() - 1; i > -1; i--) {
			if (s[i] == c) {
				s.replace(i, 1, s1);
			}
		}
	}

};

class z5
{
private:
	std::string s, s0;

public:
	z5(std::string st = "", std::string ch = "") {
		s0 = ch;
		s = st;
	}

	void foo() {
		int k = 0, n =0;
		for (int i = 0; i < s.size(); i++) {
			if (n < s0.size()) {
				if (s[i] == s0[n]) {
					n++;
				}
				else {
					n = 0;
				}
			}
			else {
				k++;
				n = 0;
				i--;
			}
		}
		if (n == s0.size()) {
			k++;
		}
		std::cout << "Количесво вхождений s0 " << k;
	}

};



int main()
{
	setlocale(LC_ALL, "rus");

	z5 first("AbaobB", "bB");
	first.foo();
}
