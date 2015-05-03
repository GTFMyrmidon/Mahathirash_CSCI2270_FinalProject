#ifndef STACK_H
#define STACK_H

#include <vector>

// Templated Stack Class
template <class T>
class Stack
{
private:
	std::vector<T> elements;
public:
	Stack();
	~Stack();
	void push(T const&);
	void pop();
	T top() const;
	bool empty() const;
	int size() const;
	void clear();
};

// Start: Stack member functions

// Constructor
template <class T>
Stack<T>::Stack()
{

}

//Destructor
template <class T>
Stack<T>::~Stack()
{

}

// Pushes something onto the stack
template <class T>
void Stack<T>::push(T const& element)
{
	elements.push_back(element);
}

// Pops something off the stack
template <class T>
void Stack<T>::pop()
{
	if (elements.empty())
		throw std::out_of_range("Error: Stack is emtpy"); // Exception for debugging

	elements.pop_back();
}

// Accesses elements at the top of the stack
template <class T>
T Stack<T>::top() const
{
	if (elements.empty())
		throw std::out_of_range("Error: Stack is empty"); // Exception for debugging

	return elements.back();
}

// Checks if stack is empty
template <class T>
bool Stack<T>::empty() const
{
	return (elements.empty());
}

// Returns number of elements in stack
template <class T>
int Stack<T>::size() const
{
	return (elements.size());
}

// Deletes all elements in the stack
template <class T>
void Stack<T>::clear()
{
	if (!elements.empty())
		elements.erase(elements.begin(), elements.end());
}
// End: Stack member functions

#endif