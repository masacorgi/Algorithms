#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false); // C�� printf,scanf�� C++�� iostream(cin, cout ..)�� ����ȭ�� �����ϰ�, c++ �� ����� ��Ʈ���� ����ϰڴٰ� ����ϴ°�. �ӵ��� ������. ������ ���� C��Ÿ�� ������� ����� ��� ������ ������� �ʴ´�. 
	cin.tie(NULL);// cin�� cout�� �⺻������ ����(tie) �Ǿ��־� cin�� ����ϸ� �ڵ����� cout�� flush�Ǿ� ��¹��۸� ����. ������� �������� ������ cin�� cout�� ���� �ʾ� ������ ������.
	cout.tie(NULL);// cout�� �ٸ� ��Ʈ���� ��������� �ʾƼ� ���ʿ� ���� 
	
	string a = "aaabbb";
	string b = a.substr(2); // ���� �ǹ��ϴ� �ι�° ���ڰ� ������ ������ �߸� 
	cout << "b: " << b << endl;
	return 0;
}

