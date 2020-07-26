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
	Node(T dt, Node* pr) {
		prev = pr;
		data = dt;
	}
	T getdata();
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
	void push(T dt);
	T pop();
	size_t size() { return size; }
	void clear();
	template <typename Tp>
	friend std::ostream& operator<<(std::ostream& out, const  Stack<Tp>& st);
	~Stack();
	Stack(Stack& st);
};

#include"Stack.tpp"