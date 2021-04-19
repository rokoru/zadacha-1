#include <iostream>
#include <cmath>


int main() {
	setlocale(LC_ALL, "ru");
	float a, b, c;
	std::cin >> a >> b >> c;
	if (a < 0 || b < 0 || c < 0) {
		std::cerr << "error";
		return 1;
	}
	else {
		float p, s;
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));

		std::cout << s << std::endl;
	}
	return 0;
}
