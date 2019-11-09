#include"iostream"
#include"iomanip"
#include"string"
#include"cmath"

using namespace std;


int main() {
	int DecimalNo;
	int i;
	long Arr[50];
	cout << "Please Enter a Number in Decimal Form" << endl;
	cin >> DecimalNo;

	for (i = 0; DecimalNo > 0; i++) {
		Arr[i] = DecimalNo % 2;
		DecimalNo = DecimalNo / 2;
	}

	cout << "The Number in Binary Form is : ";

	for (i = i-1; i >= 0; i--) {
		cout << Arr[i];
	}

	cout << endl;
	system("pause");
	return 0;
}
