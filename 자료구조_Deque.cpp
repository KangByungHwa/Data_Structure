#include <iostream>
#include <queue> 
#include <deque> 
#include <algorithm>
using namespace std;
deque <int> arr;
bool cmp(int a,int b){
	if(a<b){
		return true;
	}
	return false;
}
int main(){
	
	/*arr.push_back(1);
	arr.push_back(5);
	arr.push_front(3);
	arr.push_front(455);  // 앞으로 넣을 수 있음 
	arr.push_back(7); // 뒤로 넣을 수 있음 
	//sort(arr.begin(),arr.end(),cmp); // 기준을 세우면 느려질수있다. 
	/*while(!arr.empty()){ // 앞부터 뺄수있음  
		int cur = arr.front();
		arr.pop_front();
		cout << cur << endl;
	}
	while(!arr.empty()){ // 뒤로 뺄수잇음 
		int cur = arr.back();
		arr.pop_back();
		cout << cur << endl;
	}*/
	deque<int> d1,d2;
	deque<int>::iterator iter;
	d1.push_back(100);
	d1.push_front(50);
	d1.push_back(777);
	d1.push_front(303);
	cout << "push_front & push_back" << endl;
	for(int i=0;i<d1.size();++i){ // pop안하고 단순히 원소들을 보고싶을때 
		cout << d1[i] << " "; 
	}
	cout << endl;
	cout << "pop_back & pop_front" << endl;
	d1.pop_back();
	d1.pop_front();
	for(int i=0;i<d1.size();++i){
		cout << d1[i] << " ";
	}	
	cout << endl;
	cout << "접근" << endl;
	cout << d1[0] << endl;
	iter = d1.begin();
	++iter; // 가리키는 곳을 그다음으로 옮긴다. 
	cout << *iter <<endl; // 가리키는 그 원소를 반환한다. 
	cout << endl;
	cout << "front() & back()" << endl;
	cout << d1.front() << endl;
	cout << d1.back() << endl;
	cout << endl << "insert" << endl;
	iter  = d1.begin();
	cout << "iter = d1.begin() 은 맨 처음있는 곳을 가리킨다라는 의미이다. 그곳에 넣는다." << endl;
	d1.insert(iter,500);
	iter = d1.begin(); // 다시 원래자리로 돌아온다. 
	cout << "iter++ 는 가리키는곳을 하나 증가시켜 그다음을 가리키게한다." << endl;
	++iter;
	cout << "iter가 가리키고 있는 곳에 해당 원소를 k개 만큼 집어 넣는다." << endl;
	d1.insert(iter,3,700); // 가리키는 곳에 700원소를 3개 집어 넣는다. 
	cout << endl;
	for(int i=0;i<d1.size();++i){
		cout<< d1[i] << " ";
	}
	cout << endl;
	cout << "다른 덱에 있는 원소들은 처음부터 끝까지 복사해서 현재덱에 붙인다." << endl;
	
	d2.push_back(30);
	d2.push_back(59);
	d2.push_back(77);
 	iter = d1.begin();
 	d1.insert(iter,d2.begin(),d2.end()); // d2에있는 것들을 d1에서 현재 가리키고 있는 곳에 집어넣는다. 
 	cout << endl;
	 for(int i=0;i<d1.size();++i){
 		cout << d1[i] << " ";
	 }
}	 
