#include "Node.cpp"

/**
 * This is my generic implementation of the stack
 *
 * Jose Salazar 1/14/22
 * **/

template <class T>
class Stack {

	Node<T>* head;
	int size;
	
	public:

	Stack() : head(NULL), size(0) {}
	Stack(T data);

	int getSize() const;
	void push(T data);
	T pop();
	T peek();
	void printStack(); // for debugging
	~Stack();

	private:
	T getHeadData();

};

template <class T>
Stack<T>::Stack(T data){
	this->head = new Node<T>(data);
	this->size++;
}

template <class T>
int Stack<T>::getSize() const{
	return this->size;
}

template <class T>
void Stack<T>::push(T data){
	if(this->head != NULL){

		Node<T>* oldHead = this->head;
		this->head = new Node<T>(data);
		this->head->setNext(oldHead);
		this->size++;
	}
	else{
		this->head = new Node<T>(data);
		this->size++;
	}
}

template <class T>
T Stack<T>::pop(){
	T data = this->getHeadData();
	
	if(this->head != NULL){
		Node<T>* toDelete = this->head;
		this->head = toDelete->getNext();
		delete toDelete;
		this->size--;
	}

	return data;
}

template <class T>
T Stack<T>::peek(){
	return this->getHeadData();
}

template <class T>
void Stack<T>::printStack(){
	Node<T>* traverse = this->head;

	while(traverse != NULL){
		std::cout << traverse->getData() << std::endl;
		traverse = traverse->getNext();
	}
}

template <class T>
Stack<T>::~Stack(){
	Node<T>* traverse = this->head;
	while(traverse != NULL){
		Node<T>* toDelete = traverse;
		traverse = traverse->getNext();
		delete toDelete;
	}
}

template <class T>
T Stack<T>::getHeadData(){
	T data = NULL;

	if(this->head != NULL){
		data = this->head->getData();
	}

	return data;
}
