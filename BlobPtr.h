#ifndef __BLOBPTR_H__
#define __BLOBPTR_H__

#include <memory>
#include <string>
#include <vector>
#include "Blob.h"

template<typename> class Blob;
template <T> class BlobPtr{
 public:
  BlobPtr() : curr(0){}
  BlobPtr(Blob<T>& a, size_t sz = 0):wptr(a.data), curr(sz){}

  T& operator*(){
    auto p = check(curr, "get string value");
    return (*p)[curr];
  }
  /*
  std::string* operator->(){
    return & this->operator*();
  }
  */
  
  BlobPtr& operator++();
  BlobPtr& operator--();
  BlobPtr operator++(int);
  BlobPtr operator--(int);

 private:
  std::shared_ptr<std::vector<T>>
    check(std::size_t, const std::string&) const;
  
  std::weak_ptr<std::vector<T>> wptr;
  std::size_t curr;
};

#endif
