class Square
{
public:
	Square();
	Square(int n);
	int area();
	int getLen();
	void setLen(int n);
	
private:
	int len;
};

void cmpSquare(Square &q1, Square &q2);
