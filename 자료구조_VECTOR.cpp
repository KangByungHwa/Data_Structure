#include <iostream>
#include <vector>
using namespace std;

vector <vector<int>>g(6,vector<int>(4)), b(6,vector<int>(4));


vector <int> v1(10);

int main(){

	g.pop_back(); // 2���� ���͹迭������ ����ü ����ü�� ���ټ��ִ�. 
	
	g.insert(g.begin(),2,vector<int>(4,1));
	g[0].assign(4,1);
	for(int i=0;i<g.size();++i){
		g[i].pop_back(); // 2���� �迭���� �� ���� ������ ���� �ٻ��� �۾��Դϴ�. 
	}
	for(int i=0;i<g.size();++i){
		for(int j=0;j<g[i].size();++j){
			cout << g[i][j] << " ";
			
		}
		cout << endl;
	}
  	cout << endl;
  	v1.push_back(4);
  	v1.push_back(5); // �̹� 12�ڸ��� �������¿��� 13��°���� 4�� 5�� ��� 
  //	v1.assign(15,1); // 15�� �ڸ��� ��Ƽ� ���� 1�� ���ý�Ŵ 
	for(int i=0;i<v1.size();++i){
		cout << v1[i] << " ";
	}
	cout << endl << endl;
	cout << "v1.at(11) ��   �ε����� 11�� ���� ���� ��ȯ�մϴ�.  " ;
	cout << v1.at(11); // �ε��� 11�� ���� ���Ҹ� ��ȯ�Ѵ�. 
	cout << endl << endl;
	vector <int> v2;
	v2.push_back(6);
	v2.push_back(7);
	v2.push_back(10);
	v2.push_back(1);
	v2.push_back(14);
	v2.erase(v2.begin(),v2.begin()+2); // �ε��� 2���� �ε��� �������� ���Ҹ� �����Ѵ�. 
	cout << "v2�迭���� �ε��� 0�� ������ �ε����� 2�� ������ ������ ����� :  ";
	for(int i=0;i<v2.size();++i){
		cout << v2[i] << " ";
		
	}
	cout << endl << endl;
	v2.clear();
	cout << "clear �� v2�� ������� :  "  << v2.size() << " �Դϴ�."; 
} 
