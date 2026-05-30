#include "Stack.h"
#include <cstring>

void Stack::Expand()
{
	capacity = 2 * capacity;
	Item* storage = new Item[capacity];
	memcpy(storage, data, size * sizeof(Item));
	delete[] data;
	data = storage;
}

Stack::Stack(int n)
{
	size = 0;
	capacity = (n < MIN_SIZE ? MIN_SIZE : n);
	data = new Item[capacity];
}

Stack::Stack(const Stack& st)
{
	size = st.size;
	capacity = st.capacity;
	data = new Item[capacity];
	memcpy(data, st.data, st.size * sizeof(Item));
}

Stack::~Stack()
{
	delete[] data;
}

bool Stack::isEmpty() const
{
	return size == 0;
}

bool Stack::isFull() const
{
	return size == capacity;
}

void Stack::Push(const Item& item)
{
	if (isFull()) Expand();
	data[size++] = item;
}

const Item Stack::Pop()
{
	if (isEmpty()) return Item();
	return data[--size];
}

Stack& Stack::operator=(const Stack& st)
{
	if (this == &st)
		return *this;

	delete[] data;
	size = st.size;
	capacity = st.capacity;
	data = new Item[capacity];
	memcpy(data, st.data, st.size * sizeof(Item));
	return *this;
}





