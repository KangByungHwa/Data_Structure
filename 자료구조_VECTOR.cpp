#include <iostream>
#include <vector>
using namespace std;

vector <vector<int>>g(6,vector<int>(4)), b(6,vector<int>(4));


vector <int> v1(10);

int main(){

	g.pop_back(); // 2차원 벡터배열에서는 행자체 열자체를 없앨수있다. 
	
	g.insert(g.begin(),2,vector<int>(4,1));
	g[0].assign(4,1);
	for(int i=0;i<g.size();++i){
		g[i].pop_back(); // 2차원 배열에서 한 행의 마지막 열을 다빼는 작업입니다. 
	}
	for(int i=0;i<g.size();++i){
		for(int j=0;j<g[i].size();++j){
			cout << g[i][j] << " ";
			
		}
		cout << endl;
	}
  	cout << endl;
  	v1.push_back(4);
  	v1.push_back(5); // 이미 12자리를 잡은상태에서 13개째부터 4와 5가 들어 
  //	v1.assign(15,1); // 15개 자리를 잡아서 전부 1로 셋팅시킴 
	for(int i=0;i<v1.size();++i){
		cout << v1[i] << " ";
	}
	cout << endl << endl;
	cout << "v1.at(11) 은   인덱스가 11인 곳의 값을 반환합니다.  " ;
	cout << v1.at(11); // 인덱스 11인 곳의 원소를 반환한다. 
	cout << endl << endl;
	vector <int> v2;
	v2.push_back(6);
	v2.push_back(7);
	v2.push_back(10);
	v2.push_back(1);
	v2.push_back(14);
	v2.erase(v2.begin(),v2.begin()+2); // 인덱스 2부터 인덱스 끝까지의 원소를 삭제한다. 
	cout << "v2배열에서 인덱스 0인 값부터 인덱스가 2인 값까지 삭제한 결과는 :  ";
	for(int i=0;i<v2.size();++i){
		cout << v2[i] << " ";
		
	}
	cout << endl << endl;
	v2.clear();
	cout << "clear 후 v2의 사이즈는 :  "  << v2.size() << " 입니다."; 
} 
