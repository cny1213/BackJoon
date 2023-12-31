#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int z = 0; z < N - i; z++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}