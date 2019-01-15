#include "BlobPtr.h"

std::shared_ptr<std::vector<std::string>>
BlobPtr::check(std::size_t i, const std::string& msg) const{
  auto ptr = wptr.lock();
  if(!ptr){
    throw std::runtime_error("unbound BlobPtr");
  }
  if(i >= ptr->size()){
    throw std::out_of_range(msg);
  }
  return ptr;
}

//qianzhi
BlobPtr& BlobPtr::operator++(){
  check(curr, "will past end");
  ++curr;
  return *this;
}
//qianzhi
BlobPtr& BlobPtr::operator--(){
  --curr;
  check(curr, "will past begin");
  return *this;
}
//houzhi
//此处必须加<T>，因为还没有进入BlobPtr类的作用域
BlobPtr<T> BlobPtr<T>::operator++(int){
  //此处无须加<T>，因为已经进入BlobPtr类的作用域（在类的作用域内可以不加<>）
  BlobPtr tmp = *this;
  ++*this;
  return tmp;
}
//houzhi
//此处必须加<T>，因为还没有进入BlobPtr类的作用域
BlobPtr<T> BlobPtr<T>::operator--(int){
  //此处无须加<T>，因为已经进入BlobPtr类的作用域（在类的作用域内可以不加<>）
  BlobPtr tmp = *this;
  --*this;
  return tmp;
}
