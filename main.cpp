#include <iostream>
#include <cmath>
#include <map>
using namespace std;

map<string,double> trapeze() { //ab
	cout << "Enter trapezoid bases :";
	double a, b;
	cin >> a >> b;
	cout << "Enter other sides of trapezoid :";
	double c, d;
	cin >> c >> d;
	cout<<endl;

	int p = (a + b + c + d) / 2;
	double Square = (a+b)/abs(a-b)*sqrt((p-a)*(p-b)*(p-a-c)*(p-a-d));
	double Perimeter = a + b + c + d;
	double MidLine = (a + b) / 2;

	map<string, double> m;
	m["Square"] = Square;
	m["Perimeter"] = Perimeter;
	m["MiddleLine"] = MidLine;
	return m;

}
int main() {
	cout << "1 - trapeze " << endl;
	cout << "Enter the number of figure: ";
	int choice;
	cin >> choice;
	switch (choice) {
	case 1:
	{map<string, double>data = trapeze();
	for (auto i : data) {
		cout << i.first << " = ";
		cout << i.second << " ";
		cout << endl;
	}
	break; }
	default: 
		cout << "Sorry, there is no such option yet.";
	}
	
}
