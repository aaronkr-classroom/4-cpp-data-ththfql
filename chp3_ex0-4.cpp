// chp3ex0.cpp
// �߰����, �⸻���, �׸��� ���� ���� ��� �ް�
// ������ ��� ��� ������ ����ϱ�.
#include <algorithm>
#include <string>
#include <iostream>


using std::cin;	 // �Ǽ� ���� ���� ����
using std::cout; using std::string; using std::streamsize;


int main() {
	// ���� ������ ����
	cout << "Enter all words followed by EOF: ";

	string max = "";
	string min = "";

	// �Է��� ���� ����
	string word; // cin���� ����ϱ�
	while (cin >> word) {
//words.push_back(word);

		if (min.size() == 0) min = word;
		if (max.size() == 0) max = word;

		if (word.size() < min.size()) min = word;
		else if (word.size() > max.size()) max = word;
	}

	// ����� ���
	cout << "Max: " << max;
	cout << "Min: " << min;
		return 0;
} // main ��