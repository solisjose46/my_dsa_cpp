#include "Node.cpp"

/**
 * This is my generic implementation of singly linked list
 *
 * Jose Salazar 1/14/22
 * **/

template <class T>
class SLL {

	Node<T>* head;
	int size;
	
	public:

	SLL() : head(NULL), size(0) {}
	SLL(T data);

	int getSize() const;
	void insert(T data);
	bool find(T data);
	void remove(T data);
	void printList();

	~SLL();
};

template <class T>
SLL<T>::SLL(T data){
	this->head = new Node<T>(data);
	size++;
}

template <class T>
int SLL<T>::getSize() const{
	return this->size;
}

template <class T>
void SLL<T>::insert(T data){
	if(this->head != NULL){

		Node<T>* traverse = this->head;

		bool unique = true;

		while(traverse->getNext() != NULL){
			if(traverse->getNext()->getData() == data){
				unique = false;
				break;
			}
			traverse = traverse->getNext();
		}

		if(unique){
				traverse->setNext(new Node<T>(data));
				size++;
		}
	}
	else{
		this->head = new Node<T>(data);
		size++;
	}
}

template <class T>
bool SLL<T>::find(T data){
	Node<T>* traverse = this->head;
	bool found = false;

	while(traverse != NULL){
		if(traverse->getData() == data){
			found = true;
			break;
		}
		traverse = traverse->getNext();
	}
	return found;
}

template <class T>
void SLL<T>::remove(T data){
	Node<T>* traverse = this->head;

	while(traverse->getNext() != NULL){
		if(traverse->getNext()->getData() == data){
			Node<T>* toDelete = traverse->getNext();
			traverse->setNext(toDelete->getNext());
			delete toDelete;
			size--;
			break;
		}

		traverse = traverse->getNext();
	}
}

template <class T>
void SLL<T>::printList(){
	Node<T>* traverse = this->head;

	while(traverse != NULL){
		std::cout << traverse->getData() << std::endl;
		traverse = traverse->getNext();
	}
}

template <class T>
SLL<T>::~SLL(){
	Node<T>* traverse = this->head;
	while(traverse != NULL){
		Node<T>* toDelete = traverse;
		traverse = traverse->getNext();
		delete toDelete;
	}
}
