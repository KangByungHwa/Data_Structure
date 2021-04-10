#include <iostream>
#include <queue>
#include <cmath>  // 절댓값구할때 쓴다. 
using namespace std;


int N,M,K;
struct Tree{
	int age;
}; 
struct cmp{
	bool operator()(int a, int b){ // 큰것으 우선순위로 두고 맵위에 있는 값은 제일 큰값이다. 
		return a>b;
	}
	
};


bool operator<(Tree a,Tree b){ // 연산자 오버로딩이 쓰이려면 특정한 자료구조 써야한다. 
		
		return a.age > b.age; // 큰것부터 쌓이고 작은게 맨위로 올라가서 출력된다. 
}
int main(){
	
	priority_queue <int,vector <int>,cmp> pq;
	priority_queue <Tree> pq2;
	pq.push(5);
	pq.push(1);
	pq.push(7);
	pq.push(2);
	while(!pq.empty()){
		int k = pq.top(); pq.pop(); // 맵마지막값부터 반환해서 작은것을 꺼내려면 두값을 비교해서 큰게 먼저 와야한다. 
		cout <<k<< endl;
	}
	cout << endl;
	pq2.push({5});
	pq2.push({1});
	pq2.push({7});
	pq2.push({2});
	while(!pq2.empty()){
		Tree k = pq2.top(); pq2.pop(); // 맵마지막값부터 반환해서 작은것을 꺼내려면 두값을 비교해서 큰게 먼저 와야한다. 
		cout << k.age << endl;
	}
		
	
}
