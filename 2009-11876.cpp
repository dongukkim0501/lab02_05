#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <stdio.h>

using namespace std;

int main(){


	string strInput;	// ���� �������� N���� ���� �Է¹��� String
	vector<int> vecNum;	// �Է¹��� N���� ���� ������ Vector

	
					// ���� �Է� �ޱ�
	
	getline(cin, strInput);


	string strNum = "";	// ������ ���ڸ� ������ �ӽ� String


	for (int i = 0; i < strInput.length(); i++){
		if (strInput.at(i) == ' ')
		{
			// ������� ������ ����(����)���� Vector�� �߰� �� String �ʱ�ȭ
			vecNum.push_back(atoi(strNum.c_str()));
			strNum = "";
		}
		else
		{
			// ���Ⱑ ���� ������ ���� ����
			strNum += strInput.at(i);
			continue;
		}
	}


	vecNum.push_back(atoi(strNum.c_str()));	// ������ ���ڵ� ���Ϳ� �߰�

	
	sort(vecNum.begin(), vecNum.end(), greater<int>());

	cout << "Ordered array " << endl;

	for (auto j : vecNum) {

		cout << j << " ";

	}

	system("pause");

}