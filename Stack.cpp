//#include "Stack.h"
//
//struct point {
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	point() {
//		x = 0;
//		y = 0;
//		z = 0;
//	}
//	point(int a) {
//		x = a;
//		y = a;
//		z = a;
//	}
//	point& operator=(const point& p) {
//		x = p.x;
//		y = p.y;
//		z = p.z;
//		return *this;
//	}
//};
//
//template<typename T>
//T Node<T>::getdata(){
//	return data;
//}
//
//std::ostream& operator<<(std::ostream& out, point& p) {
//	out << "(" << p.x << ";" << p.y << ";" << p.z << ")";
//	return out;
//}
//
//template<typename T>
//point& in(int i) {
//	point* p = new point<T>(0);
//	p->x = i;
//	p->y = i;
//	p->z = i;
//	return *p;
//};
//
//template<typename T>
//Stack<T>::Stack(){
//	size_ = 0;
//	tail = nullptr;
//}
//
//template<typename T>
//inline void Stack<T>::push(T dt){
//	Node<T>* tmp = new Node<T>(dt, tail);
//	tail = tmp;
//	size_++;
//}
//
//template<typename T>
//T Stack<T>::pop(){
//	T tmp(0);
//	if (!tail) {
//		std::cerr << "stack is empty" << std::endl;
//		return tmp;
//	}
//	tmp = tail->getdata();
//	Node<T>* nd = tail->prev;
//	delete tail;
//	tail = nd;
//	size_--;
//	return tmp;
//}
//
//template<typename T>
//void Stack<T>::clear(){
//	while (size_ > 0) {
//		Node<T>* nd = tail->prev;
//		delete tail;
//		tail = nd;
//		size_--;
//	}
//}
//
//template<typename T>
//std::ostream& operator<<(std::ostream& out, const Stack<T>& st){
//	Node<T>* tmp = st.tail;
//	for (size_t i = 0; i < st.size_; i++) {
//		out << tmp->data << " || ";
//		tmp = tmp->prev;
//	}
//	return out;
//}
//
//template<typename T>
//Stack<T>::~Stack(){
//	while (size_ > 0) {
//		Node<T>* nd = tail->prev;
//		delete tail;
//		tail = nd;
//		size_--;
//	}
//}
//
//template<typename T>
//Stack<T>::Stack(Stack& st){
//	size_ = 0;
//	tail = nullptr;
//	T* tmp = new T[st.size_];
//	Node<T>* nd = st.tail;
//	size_t i = 1;
//	for (i; i <= st.size_; i++) {
//		tmp[i - 1] = nd->data;
//		nd = nd->prev;
//	}
//	for (i--; i > 0; i--) {
//		this->push(tmp[i - 1]);
//	}
//}
//
