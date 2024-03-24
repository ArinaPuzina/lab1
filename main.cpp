#include <iostream>
#include <cmath>
#include <map>
using namespace std;

void rectangle(){
    double a,b;
    cout<<"Enter the sides of the rectangle separated by a space: ";
    cin >> a >> b; cout << endl;
    if ((a <=0) || (b<=0)) {
        cout << "There is no such rectangle" << endl;
    }
    else {
        cout<< "Perimeter = " << 2*(a+b) << endl;
        cout<< "Square = " << a*b << endl;
        cout<< "Diagonal = " << sqrt(a*a + b*b) << endl;
    }
}

map<string,double> trapeze() {
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
    cout << "-------------MENU-------------" << endl;
	cout << "1 - trapeze " << endl;
	cout << "2 - rectangle " << endl;
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
	case 2:
    {
        rectangle();
        break;
    }
	default:
		cout << "Sorry, there is no such option yet.";
	}

}
