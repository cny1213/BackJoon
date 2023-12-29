//백준1547. 공

//step1) 기능 정리
//1. 입력값(M와 X, Y)을 입력받는다.
//2. 공이 들어있는 컵의 번호 출력하는 
//(예외처리: 공이 사라져서 컵 밑에 없는 경우 - 1)

#include <iostream>
using namespace std;

int main() {
	int M, X, Y;
	int cupNumberWithBall = 1;
	//1. 입력값(M와 X, Y)을 입력받는다.
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> X >> Y;

		//X 또는 Y == 공이 들어있는 컵의 번호  일 경우, 
		//공이 들어있는 컵의 번호를 그 다른 값으로 바꿔줌
		if (X == cupNumberWithBall) {
			cupNumberWithBall = Y;
		}
		else if (Y == cupNumberWithBall) {
			cupNumberWithBall = X;
		}
	}
	cout << cupNumberWithBall;
}
