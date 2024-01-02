#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) { 
		//n-i만큼 " "
		for (int a = 0; a < N - i; a++) {
			cout << " ";
		}
		//2*i - 1 만큼 "*"
		for (int b = 0; b < 2 * i - 1; b++) {
			cout << "*";
		}
		cout << endl;
	}
}

//1 2n-1 4 1 4
//3      3 3 3
//5      2 5 2
//7      1 7 1
//9      0 9 0
//....