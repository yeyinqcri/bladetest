#include "foo.h"


Foo::Foo(){
  bar = 0;
}

Foo::Foo(const Foo& foo){
  this->bar = foo.bar;
}

int Foo::getBar(){
  return bar;
}
