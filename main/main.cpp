#include <iostream>
#include <thread>
using namespace std;

void func(){
  cout << "this is for multiple thread"<<endl;
}

int main(){
  thread t1{func};
  cout << "deliberately need a conflict master" << endl;
  t1.join();
}
