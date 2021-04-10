#include <iostream> 
#include <list> 

using namespace std; 
  
int main() 
{ 
    // ����Ʈ ���� 
    list<int> a;  
    list<int> test(3); //3���� ���Ҹ� ������.������/ 
 	list<int> c(3,2); // 3���� ���Ҹ� ������ 2�� �ʱ�ȭ�Ѵ�.������. 
 	list<int> test2(c); // c�� �����Ѵ�. 
	list<int>::iterator iter1; 
	for(iter1 = test2.begin();iter1 != test2.end();++iter1){
		
		cout << *iter1 << endl;
	}
    // ���� �߰� 
    a.push_back(22); 
    a.push_back(33); 
    a.push_front(11); 
    a.push_back(44); 
    a.push_back(55); 
  
    // �ݺ��� ���� 
    list<int>::iterator iter = a.begin(); 
 
    // ����Ʈ ��� 
    for(iter=a.begin(); iter!=a.end(); iter++) 
    { 
        cout << *iter << endl; // ���� ����Ʈ: 11 22 33 44 55 
    } 
 
    cout << "" << endl; 
    cout << "" << endl; 
  
    // ���� ���� 
    a.pop_front(); 
    a.pop_back(); 
     
    for(iter=a.begin(); iter!=a.end(); iter++) 
    { 
        cout << *iter << endl; // ���� ������ ����Ʈ: 22 33 44 
    } 
  
    cout << "" << endl; 
    
    // ����Ʈ ������ ��� 
    cout << a.size() << endl; // 3 ���( 22, 33, 44 �̹Ƿ�) 
  
    // ����Ʈ�� ����ִ°� 
    cout << a.empty() << endl; // ������� �����Ƿ� 0 ��ȯ 
      
    // ����Ʈ ù��° ���� ��� 
    cout << a.front() << endl; // 22 
  
    // ����Ʈ ������ ���� ��� 
    cout << a.back() << endl; // 44 
  
    cout << "" << endl; 
 
    // �ݺ��� 2��° ��ġ�� �̵� 
 
    //a.erase(iter); 
   
	list <int> b;
	b.push_back(10);
	b.push_front(4); // ���Ҹ� �տ� �ִ´�. 
	b.push_back(334);
	b.push_back(34);
	a.swap(b); // a����Ʈ�� b ����Ʈ �ٲ۴�. 
	a.sort(); // �⺻ �������� 
	a.reverse();// ������ �����Ѵ�. 
	a.remove(10); // ���� 10�� �����Ѵ�.
	a.insert(iter,555); // ���� ����Ű�� ���� ���Խ�Ų��. 
	a.pop_front();
	//a.sort(greater<int>()); // ��������  
    for(iter=a.begin(); iter!=a.end();) // erase �� �״��� iter�� ��ȯ�ϱ⶧���� �������ʿ����. 
    { 
        cout << *iter << endl; //����° ����(44) ���� �߰��ϴ� ��(22,55555,33,44) 
        iter = a.erase(iter);  // iterator �� ����Ű�� ���� ��ȯ�Ѵ�. Ư�����Ҹ� �����Ϸ��� remove(���Ұ�)�� ����Ѵ�. 
    }  
    for(iter=a.begin(); iter!=a.end(); iter++) 
    { 
        cout << *iter << endl; //����° ����(44) ���� �߰��ϴ� ��(22,55555,33,44) 
     
    }  
}
