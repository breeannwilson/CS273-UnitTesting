#include "Square.h"

bool isSquare(int a, int b, int c, int d) {
	//A correct function would return true if a, b, c, d are valid sides for a square
	//this means the sides must all be the same and must be greater than 0
	if (a == b && b == c && c == d && d == a && a > 0)
		return true;
	else
		return false;
}