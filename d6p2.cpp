#include <iostream>

class Singleton{
  static Singleton *instance;
  int data;

  Singleton(){
    data = 0;
  }

 public:
  static Singleton *getInstance(){
    if(!instance)
      instance = new Singleton;
    return instance;
  }

  int getData(){
    return instance->data;
  }

  void setData(int _data){
    this->data = _data;
  }
};  

Singleton *Singleton::instance = 0;

int main(){
  Singleton *s = s->getInstance();
  std::cout << s->getData() << std::endl;
  s->setData(100);
  std::cout << s->getData() << std::endl;
  Singleton *t = t->getInstance();
  std::cout << t->getData() << std::endl;
  return 0;
}  
