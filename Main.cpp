#include "Stack.h"

int main() {
	Stack<int> St_int;
	St_int.clear();
	St_int.pop();
	std::cout << St_int;
	std::cout << std::endl;
	for (int i = 0; i < 10; i++) {
		St_int.push(i);
	}
	std::cout << St_int;
	std::cout << std::endl;
	St_int.pop();
	std::cout << St_int;
	Stack<int> st_copy(St_int);
	std::cout << std::endl;
	std::cout << st_copy;
	std::cout << std::endl;

	Stack<point> St_point;
	St_point.clear();
	St_point.pop();
	std::cout << St_point;
	std::cout << std::endl;
	for (int i = 0; i < 10; i++) {
		point* p = new point(i);
		St_point.push(*p);
	}
	std::cout << St_point;
	std::cout << std::endl;
	St_point.pop();
	std::cout << St_point;
	std::cout << std::endl;

	Stack<double> St_double;
	St_double.clear();
	St_double.pop();
	std::cout << St_double;
	std::cout << std::endl;
	for (double i = 0; i < 10; i += 0.5) {
		St_double.push(i);
	}
	std::cout << St_double;
	std::cout << std::endl;
	St_double.pop();
	std::cout << St_double;
	std::cout << std::endl;
}