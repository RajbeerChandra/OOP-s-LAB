#include <iostream>
using namespace std;
class box {
private:
	int length;
	int breadth;
	int height;
public:
	void set_dimensions(int length1, int breadth1,int height1)
	{
		length = length1;
		breadth = breadth1;
		height = height1;
	}
	void show_data()
	{
		cout << " Length = " << length
			<< "\n Breadth = " << breadth
			<< "\n Height = " << height
			<< endl;
	}
};
int main()
{
	box B1, B3;
	// Set dimensions of Box B1
	B1.set_dimensions(14, 12, 16);
	B1.show_data();
	// When copying the data of object
	// at the time of initialization
	// then copy is made through
	// COPY CONSTRUCTOR
	box B2 = B1;
	B2.show_data();
	// When copying the data of object
	// after initialization then the
	// copy is done through DEFAULT
	// ASSIGNMENT OPERATOR
	B3 = B1;
	B3.show_data();
	return 0;
}
