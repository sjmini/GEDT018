#include "../common.h"
#include <cmath>

void math_test() {
	// Print out a few log values with log functions 
	// from the <cmath> standard libarary
	// Note that you may omit "std::", and why?
	cout << "log(1) = " << std::log(1) << "\n" \
	     << "log(20) = " << log(20) << "\n" \
	     << "log(+Inf) = " << log(INFINITY) << endl;

	// Example of a square root
	cout << "sqrt(2) = " << sqrt(2) << endl;
	cout << "golden ratio = " << (1+sqrt(5))/2 << endl;
}
