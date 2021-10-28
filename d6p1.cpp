#include <iostream>

class SmartArray{
private:
  int* arr;
  int capacity;
  int id;
  
  void adjust(){
    int *arr2 = new int[2*capacity];
    for(int i=0;i<capacity;i++){
      arr2[i] = arr[i];
    }

    delete[] arr;
    arr = arr2;
    capacity *= 2;
  }  
  
public:
  SmartArray(int n){
    arr = new int[n];
    capacity = n;
    id = n;
  }

  int size(){
    return id;
  }

  void push_back(int val){
    if(id == capacity) adjust();
    arr[id++] = val;
  }

  int& operator[](int i){
    if(i >= id){
      std::cout << "Out of index error!";
      exit(1);
    }
    return arr[i];
  }
};  

int main(){
  SmartArray a = SmartArray(0);
  while(1){
    std::cout << "1. Push Back\n2. Size\n3. Access\4. Increment\n5. Exit\n";
    int ch, v;
    std::cin >> ch;
    switch(ch){
    case 1: std::cin >> v;
      a.push_back(v);
      break;
    case 2: std::cout << a.size() << std::endl;
      break;
    case 3: std::cin >> v;
      std::cout << a[v] << std::endl;
      break;
    case 4:
      std::cin >> v;
      a[v]++;
      std::cout << a[v] << std::endl;
      break;
    case 5:
      exit(0);
    }  

  }  
  return 0;
}
