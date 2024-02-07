#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    // 변수 정의
int pCount = 0, yCount = 0;
bool answer;

// 문자열 s를 소문자로 변경한다
for (int i = 0; i < s.size(); i++) {
	s[i] = tolower(s[i]);
}

// 문자 p의 개수를 구한다
int idx = 0;
while (s.find('p', idx) != string::npos) {
	idx = s.find('p', idx) + 1;
	pCount++;
}

// 문자 y의 개수를 구한다
idx = 0;
while (s.find('y', idx) != string::npos) {
	idx = s.find('y', idx) + 1;
	yCount++;
}

// answer이 true인지 false인지 구한다
	// pCount와 yCount가 0일 경우
if (pCount == 0 && yCount == 0) {
	answer = true;
}
else {
	// pCount != yCount 일 경우
	if (pCount == yCount) {
		answer = true;
	}
	// pCount = yCount 일 경우 
	else if (pCount != yCount) {
		answer = false;
	}
}

return answer;
}