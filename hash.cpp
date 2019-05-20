#include<iostream>
#include<list>

using namespace std;

class Hash{
	int Bucket;	//No. of keys
	list<int> *table;
public:
	// Create a constructor
	Hash (int V);

	void insert_item(int x);
	void delete_item(int key);
	void display_Hash();
	// Creating Hash function to map VALUES to KEYS
	int HashFunction(int x){
		return (x % Bucket);
	}
};

Hash::Hash(int V){
	this -> Bucket = V;
	table = new list<int>[Bucket];
}

void Hash::insert_item(int key){
	int index = HashFunction(key);
	table[index].push_back(key);
}


// function to display hash table 
void Hash::display_Hash() { 
	for (int i = 0; i < Bucket; i++) { 
    std::cout << i; 
    for (auto x : table[i]){ 
      std::cout << " --> " << x; 
  	}
    std::cout << endl; 
  } 
} 


int main(){
	int a[] = {15,11,27,8,12};
	int n = sizeof(a)/sizeof(a[0]);
	Hash h(7);
	for (int i = 0; i < n; i++)
		h.insert_item(a[i]);
	h.display_Hash();
	return 0;
}