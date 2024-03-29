// chp3ex0.cpp
// 중간고사, 기말고사, 그리고 과제 점수 몇개를 받고
// 마지막 평균 결과 점수를 계산하기.
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::cin;	 // 실수 숫자 길이 정의
using std::cout; using std::string;
 using std::streamsize;
using std::sort; using std::vector;

int main() {
	// 과제 점수를 물음
	cout << "Enter all words followed by EOF: ";
	vector<string> word;

	// 입력을 위한 변수
	string word; // cin에서 사용하기
	while (cin >>word) {
		words.push_back(word);
	}

	
	return 0;
} // main 끝