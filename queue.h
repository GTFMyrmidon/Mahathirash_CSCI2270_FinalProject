#ifndef QUEUE_H
#define QUEUE_H

#include <vector>

// Templated Queue Class
template <class T>
class Queue
{
private:
	std::vector<T> elements;
public:
	Queue();
	~Queue();
	void enqueue(T const&);
	void dequeue();
	T front() const;
	bool empty() const;
	int size() const;
	void clear();
};

// Begin: Queue member functions

// Constructor
template <class T>
Queue<T>::Queue()
{

}

// Destructor
template <class T>
Queue<T>::~Queue()
{

}

// Enqueues an element
template <class T>
void Queue<T>::enqueue(T const& element)
{
	elements.push_back(element);
}

// Dequeues an element
template <class T>
void Queue<T>::dequeue()
{
	if (elements.empty())
		throw std::out_of_range("Error: Queue is empty."); // Exception for debugging
	elements.erase(elements.begin());
}

// Accesses element at the front of the queue
template <class T>
T Queue<T>::front() const
{
	if (elements.empty())
		throw std::out_of_range("Error: Queue is empty."); // Exception for debugging
	return elements.front();
}

// Checks if queue is empty
template <class T>
bool Queue<T>::empty() const
{
	return (elements.empty());
}

// Returns number of elements in queue
template <class T>
int Queue<T>::size() const
{
	return (elements.size());
}

// Deletes all elements in the queue
template <class T>
void Queue<T>::clear()
{
	if (!elements.empty())
		elements.erase(elements.begin(), elements.end());
}
// End: Queue member functions

#endif