#include "Stack.h"

int main() {
	Stack<int> St_int;
	St_int.push(0);
	std::cout << St_int << std::endl;
	St_int.clear();
	std::cout << St_int << std::endl;
	St_int.push(0);
	std::cout << St_int << std::endl;
	St_int.pop();
	std::cout << St_int << std::endl;
	for (int i = 0; i < 10; i++) {
		St_int.push(i);
	}
	std::cout << St_int << std::endl;
	Stack<int> St_int_copy;
	St_int_copy = St_int;
	St_int.pop();
	std::cout << St_int << std::endl;
	std::cout << St_int_copy << std::endl;
	St_int_copy.clear();
	Stack<int> st_copy(St_int);
	std::cout << st_copy << std::endl;

	Stack<point> St_point;
	St_point.push(0);
	std::cout << St_point << std::endl;
	St_point.clear();
	std::cout << St_point << std::endl;
	St_point.push(0);
	std::cout << St_point << std::endl;
	St_point.pop();
	std::cout << St_point << std::endl;
	for (int i = 0; i < 10; i++) {
		point* p = new point(i);
		St_point.push(*p);
	}
	std::cout << St_point << std::endl;
	St_point.pop();
	std::cout << St_point << std::endl;

	Stack<double> St_double;
	St_double.clear();
	St_double.pop();
	std::cout << St_double << std::endl;
	for (double i = 0; i < 10; i += 0.5) {
		St_double.push(i);
	}
	std::cout << St_double << std::endl;
	St_double.pop();
	std::cout << St_double << std::endl;
}