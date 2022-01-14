/**
 * This node is for use with my implementation of singly linked list SLL.cpp
 * **/

template <class T>
class Node {
	T data;
	Node<T>* next;

	public:
	Node() : next(NULL) {}
	Node(T dt) : data(dt), next(NULL) {}

	T getData() const;
	Node<T>* getNext() const;

	void setData(T);
	void setNext(Node<T>*);
};

template <class T>
T Node<T>::getData() const{
	return this->data;
}

template <class T>
Node<T>* Node<T>::getNext() const{
	return this->next;
}

template <class T>
void Node<T>::setData(T data){
	this->data = data;
}

template <class T>
void Node<T>::setNext(Node<T> *next){
	this->next = next;
}
