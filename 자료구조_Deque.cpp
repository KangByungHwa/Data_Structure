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
	arr.push_front(455);  // ������ ���� �� ���� 
	arr.push_back(7); // �ڷ� ���� �� ���� 
	//sort(arr.begin(),arr.end(),cmp); // ������ ����� ���������ִ�. 
	/*while(!arr.empty()){ // �պ��� ��������  
		int cur = arr.front();
		arr.pop_front();
		cout << cur << endl;
	}
	while(!arr.empty()){ // �ڷ� �������� 
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
	for(int i=0;i<d1.size();++i){ // pop���ϰ� �ܼ��� ���ҵ��� ��������� 
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
	cout << "����" << endl;
	cout << d1[0] << endl;
	iter = d1.begin();
	++iter; // ����Ű�� ���� �״������� �ű��. 
	cout << *iter <<endl; // ����Ű�� �� ���Ҹ� ��ȯ�Ѵ�. 
	cout << endl;
	cout << "front() & back()" << endl;
	cout << d1.front() << endl;
	cout << d1.back() << endl;
	cout << endl << "insert" << endl;
	iter  = d1.begin();
	cout << "iter = d1.begin() �� �� ó���ִ� ���� ����Ų�ٶ�� �ǹ��̴�. �װ��� �ִ´�." << endl;
	d1.insert(iter,500);
	iter = d1.begin(); // �ٽ� �����ڸ��� ���ƿ´�. 
	cout << "iter++ �� ����Ű�°��� �ϳ� �������� �״����� ����Ű���Ѵ�." << endl;
	++iter;
	cout << "iter�� ����Ű�� �ִ� ���� �ش� ���Ҹ� k�� ��ŭ ���� �ִ´�." << endl;
	d1.insert(iter,3,700); // ����Ű�� ���� 700���Ҹ� 3�� ���� �ִ´�. 
	cout << endl;
	for(int i=0;i<d1.size();++i){
		cout<< d1[i] << " ";
	}
	cout << endl;
	cout << "�ٸ� ���� �ִ� ���ҵ��� ó������ ������ �����ؼ� ���給�� ���δ�." << endl;
	
	d2.push_back(30);
	d2.push_back(59);
	d2.push_back(77);
 	iter = d1.begin();
 	d1.insert(iter,d2.begin(),d2.end()); // d2���ִ� �͵��� d1���� ���� ����Ű�� �ִ� ���� ����ִ´�. 
 	cout << endl;
	 for(int i=0;i<d1.size();++i){
 		cout << d1[i] << " ";
	 }
}	 
