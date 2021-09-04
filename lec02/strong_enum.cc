#include "../common.h"

void enum_test2() {
	enum class Day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};
	enum class Weather {Rainy, Sunny, Cloudy, Snowy};

	Day d = Day::Tue;
	Weather w = Weather::Cloudy;

	// strong enum type does not allow an element to present an integer
	// for example, Day::Tue cannot be replaced with 2
	if (d == Day::Tue && w == Weather::Cloudy) {
		cout << "Let's go for a walk!" << endl;
	}

}
