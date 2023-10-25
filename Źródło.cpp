#include <iostream>
using namespace std;

int main(){
	int AA[10];
	int* BB = new int[10];

	for (int i = 0; i < 10; i++) {
		cin >> AA[i];
	}

	int pos = 0;

	for (int i = 0; i < 10; i++) {
		if (AA[i] < 0) {
			BB[pos] = AA[i];
			pos++;
		}
	}

	for (int i = 0; i < pos; i++) {
		cout << BB[i] << endl;
	}

	cout << "Bylo:" << pos << endl;
	cout << "Pominieto:" << 10 - pos << endl;

	return 0;
}