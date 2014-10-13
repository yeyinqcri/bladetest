#include <iostream>
#include <thread>
using namespace std;

void func(){
  cout << "this is for multiple thread"<<endl;
}

int main(){
  thread t1{func};
  cout << "test" << endl;
  t1.join();
}
