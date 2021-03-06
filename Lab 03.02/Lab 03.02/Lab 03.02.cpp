// Lab 03.02.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <string>

#define COLS 10

using namespace std;
int main() {

	int m[][COLS] = {
		{},
		{ 0, 11, 21, 31, 41, 51, 61, 71, 81, },
		{ 0, 12, 22, 32, 42, 52, 62, 72, 82, },
		{ 0, 13, 23, 33, 43, 53, 63, 73, 83, },
		{ 0, 14, 24, 34, 44, 54, 64, 74, 84, },
		{ 0, 15, 25, 35, 45, 55, 65, 75, 85, },
		{ 0, 16, 26, 36, 46, 56, 66, 76, 86, },
		{ 0, 17, 27, 37, 47, 57, 67, 77, 87, },
		{ 0, 18, 28, 38, 48, 58, 68, 78, 88, },
		{},
	};


	int *pi = *m;
	int i, mn = sizeof(m) / sizeof(int);
	for (i = 0; i < mn; ++i, ++pi)
	{
		printf("%3d%c", *pi, (i + 1) % COLS ? '\0' : '\n');
	}

	int border = 0;
	int x0, y0, x1, y1;
	printf("\n Input (x0;y0) for horse, (x1;y1) for pawn\n");
	cin >> x0 >> y0 >> x1 >> y1;
	if (x0 < 1 || x0 > 8) {
		printf("x0: out border\n");
		border += 1;
	}
	if (x1 < 1 || x1 > 8) {
		printf("x1: out border\n");
		border += 1;
	}
	if (y0 < 1 || y0 > 8) {
		printf("y0: out border\n");
		border += 1;
	}
	if (y1 < 1 || y1 > 8) {
		printf("y1: out border\n");
		border += 1;
	}
	if (border > 0) {
		return 0;
	}
	if (((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) == 5)) {
		cout << "horse can eat pawn\n";
	}
	else {
		cout << "horse can't eat pawn\n";
	}
	if ((x0 + 1 == x1 || x0 - 1 == x1 ) && (y0 + 1 == y1 || y0 - 1 == y1)) {
		cout << "pawn can slesh horse\n";
	}
	else {
		cout << "pawn can't slesh horse\n";
	}
	return 0;
}