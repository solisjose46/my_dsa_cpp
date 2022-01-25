class Queen {
        int x;
        int y;

        public:
        Queen(int x, int y) : this->x(x), this->y(y) {}
        int getX() const;
        int getY() const;
        void setX(int);
        void setY(int);
        ~Queen();
}

int Queen::getX() const{
	return this->x;
}

int Queen::getY() const{
	return this->y;
}

void Queen::setX(int x){
	this->x = x;
}

void Queen::setY(int y){
	this->y = y;
}
// empty destructor
Queen::~Queen(){}
