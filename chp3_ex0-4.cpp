// chp3ex0.cpp
// 중간고사, 기말고사, 그리고 과제 점수 몇개를 받고
// 마지막 평균 결과 점수를 계산하기.
#include <algorithm>
#include <string>
#include <iostream>


using std::cin;	 // 실수 숫자 길이 정의
using std::cout; using std::string; using std::streamsize;


int main() {
	// 과제 점수를 물음
	cout << "Enter all words followed by EOF: ";

	string max = "";
	string min = "";

	// 입력을 위한 변수
	string word; // cin에서 사용하기
	while (cin >> word) {
//words.push_back(word);

		if (min.size() == 0) min = word;
		if (max.size() == 0) max = word;

		if (word.size() < min.size()) min = word;
		else if (word.size() > max.size()) max = word;
	}

	// 결과를 출력
	cout << "Max: " << max;
	cout << "Min: " << min;
		return 0;
} // main 끝