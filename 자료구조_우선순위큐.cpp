#include <iostream>
#include <queue>
#include <cmath>  // ���񰪱��Ҷ� ����. 
using namespace std;


int N,M,K;
struct Tree{
	int age;
}; 
struct cmp{
	bool operator()(int a, int b){ // ū���� �켱������ �ΰ� ������ �ִ� ���� ���� ū���̴�. 
		return a>b;
	}
	
};


bool operator<(Tree a,Tree b){ // ������ �����ε��� ���̷��� Ư���� �ڷᱸ�� ����Ѵ�. 
		
		return a.age > b.age; // ū�ͺ��� ���̰� ������ ������ �ö󰡼� ��µȴ�. 
}
int main(){
	
	priority_queue <int,vector <int>,cmp> pq;
	priority_queue <Tree> pq2;
	pq.push(5);
	pq.push(1);
	pq.push(7);
	pq.push(2);
	while(!pq.empty()){
		int k = pq.top(); pq.pop(); // �ʸ����������� ��ȯ�ؼ� �������� �������� �ΰ��� ���ؼ� ū�� ���� �;��Ѵ�. 
		cout <<k<< endl;
	}
	cout << endl;
	pq2.push({5});
	pq2.push({1});
	pq2.push({7});
	pq2.push({2});
	while(!pq2.empty()){
		Tree k = pq2.top(); pq2.pop(); // �ʸ����������� ��ȯ�ؼ� �������� �������� �ΰ��� ���ؼ� ū�� ���� �;��Ѵ�. 
		cout << k.age << endl;
	}
		
	
}
