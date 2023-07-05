#include <iostream>
using namespace std;
class student
{
	private:
		char  name[30];
		int   rollNo;
		int   total;
	public:
		void getDetails(void);
		void putDetails(void);
};
void student::getDetails(void)
{
	cout << "Enter name: " ;
	cin >> name;
	cout << "Enter roll number: ";
	cin >> rollNo;
	cout << "Enter total marks outof 500: ";
	cin >> total;
}
void student::putDetails(void)
{
	cout << "Student details:\n";
	cout << "Name:"<< name ;
	cout << ",Roll Number:" << rollNo;
	cout << ",Total:" << total ;
}
int main()
{
	student std;	
	std.getDetails();
	std.putDetails();
	return 0;
}
