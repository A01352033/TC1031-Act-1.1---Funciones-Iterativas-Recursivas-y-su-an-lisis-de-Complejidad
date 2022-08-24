// =================================================================
//
// File: activity.h
// Author: Manuel Villalpando Linares
// Date: 27 de agosto del 2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n)
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int contador = 0;
	
	for (int i = 1; i < n; i++) {
		     contador += i;
	}
	return contador;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	T(n)
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 0 || n <= 0) {
		return 0;
	}
	return n + sumaRecursiva(n - 1);
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n^2)
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	int k = n(n + 1)/2;
	return k;
}

#endif /* ACTIVITY_H */
