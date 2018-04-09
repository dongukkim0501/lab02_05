#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <stdio.h>

using namespace std;

int main(){


	string strInput;	// 띄어쓰기 기준으로 N개의 수를 입력받을 String
	vector<int> vecNum;	// 입력받은 N개의 수를 저장할 Vector

	
					// 숫자 입력 받기
	
	getline(cin, strInput);


	string strNum = "";	// 각각의 숫자를 저장할 임시 String


	for (int i = 0; i < strInput.length(); i++){
		if (strInput.at(i) == ' ')
		{
			// 현재까지 저장한 문자(숫자)들을 Vector에 추가 후 String 초기화
			vecNum.push_back(atoi(strNum.c_str()));
			strNum = "";
		}
		else
		{
			// 띄어쓰기가 나올 때까지 문자 더함
			strNum += strInput.at(i);
			continue;
		}
	}


	vecNum.push_back(atoi(strNum.c_str()));	// 마지막 숫자도 벡터에 추가

	
	sort(vecNum.begin(), vecNum.end(), greater<int>());

	cout << "Ordered array " << endl;

	for (auto j : vecNum) {

		cout << j << " ";

	}

	system("pause");

}