#include <iostream> 
#include <list> 

using namespace std; 
  
int main() 
{ 
    // 리스트 생성 
    list<int> a;  
    list<int> test(3); //3개의 원소를 가진다.생성자/ 
 	list<int> c(3,2); // 3개의 원소를 가지며 2로 초기화한다.생성자. 
 	list<int> test2(c); // c를 복사한다. 
	list<int>::iterator iter1; 
	for(iter1 = test2.begin();iter1 != test2.end();++iter1){
		
		cout << *iter1 << endl;
	}
    // 원소 추가 
    a.push_back(22); 
    a.push_back(33); 
    a.push_front(11); 
    a.push_back(44); 
    a.push_back(55); 
  
    // 반복자 생성 
    list<int>::iterator iter = a.begin(); 
 
    // 리스트 출력 
    for(iter=a.begin(); iter!=a.end(); iter++) 
    { 
        cout << *iter << endl; // 원본 리스트: 11 22 33 44 55 
    } 
 
    cout << "" << endl; 
    cout << "" << endl; 
  
    // 원소 삭제 
    a.pop_front(); 
    a.pop_back(); 
     
    for(iter=a.begin(); iter!=a.end(); iter++) 
    { 
        cout << *iter << endl; // 원소 삭제후 리스트: 22 33 44 
    } 
  
    cout << "" << endl; 
    
    // 리스트 사이즈 출력 
    cout << a.size() << endl; // 3 출력( 22, 33, 44 이므로) 
  
    // 리스트가 비어있는가 
    cout << a.empty() << endl; // 비어있지 않으므로 0 반환 
      
    // 리스트 첫번째 원소 출력 
    cout << a.front() << endl; // 22 
  
    // 리스트 마지막 원소 출력 
    cout << a.back() << endl; // 44 
  
    cout << "" << endl; 
 
    // 반복자 2번째 위치로 이동 
 
    //a.erase(iter); 
   
	list <int> b;
	b.push_back(10);
	b.push_front(4); // 원소를 앞에 넣는다. 
	b.push_back(334);
	b.push_back(34);
	a.swap(b); // a리스트와 b 리스트 바꾼다. 
	a.sort(); // 기본 오름차순 
	a.reverse();// 역으로 정렬한다. 
	a.remove(10); // 원소 10을 삭제한다.
	a.insert(iter,555); // 현재 가리키는 곳에 삽입시킨다. 
	a.pop_front();
	//a.sort(greater<int>()); // 내림차순  
    for(iter=a.begin(); iter!=a.end();) // erase 는 그다음 iter를 반환하기때문에 증가할필요없다. 
    { 
        cout << *iter << endl; //세번째 원소(44) 전에 추가하는 것(22,55555,33,44) 
        iter = a.erase(iter);  // iterator 가 가리키는 값을 반환한다. 특정원소를 삭제하려면 remove(원소값)을 사용한다. 
    }  
    for(iter=a.begin(); iter!=a.end(); iter++) 
    { 
        cout << *iter << endl; //세번째 원소(44) 전에 추가하는 것(22,55555,33,44) 
     
    }  
}
