#pragma once
#include <iostream>

template <typename T>
class Node {
private:
	T data;
	Node* prev;
public:
	template <typename Tp>
	friend class Stack;
	Node(const T& dt, Node* pr) {
		prev = pr;
		data = dt;
	}
	T getdata() const;
	template <typename Tp>
	friend std::ostream& operator<<(std::ostream& out, const  Stack<Tp>& st);
};

template <typename T>
class Stack {
private:
	size_t size_;
	Node<T>* tail;
public:
	Stack();
	void push(const T& dt);
	T pop();
	size_t size() const { return size; }
	void clear();
	template <typename T>
	friend std::ostream& operator<<(std::ostream& out, const  Stack<T>& st);
	~Stack();
	Stack(const Stack& st);
};

//template<typename T>
//std::ostream& operator<<(std::ostream& out, const Stack<T>& st) {
//	Node<T>* tmp = st.tail;
//	for (size_t i = 0; i < st.size_; i++) {
//		out << tmp->data << " || ";
//		tmp = tmp->prev;
//	}
//	return out;
//}

#include"Stack.ipp"