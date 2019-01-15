#include "Blob.h"
//#include <iostream>
//#include "StrBlobPtr.h"

/*
bool operator==(const Blob& lhs, const Blob& rhs){
  
  if(lhs.data->size() >=0 && lhs.data->size() == rhs.data->size()){
    for(int i = 0; i < lhs.data->size(); ++i){
      if((*lhs.data)[i] != (*rhs.data)[i]){
	return false;
      }
    }
    return true;
  }
  else{
    return false;
  }
  
  return *lhs.data == *rhs.data;
  
}
bool operator!=(const Blob& lhs, const Blob& rhs){
  return !operator==(lhs, rhs);
}
*/
/*
BlobPtr Blob::begin(){
  auto b = BlobPtr(*this);
  return b;
}
BlobPtr Blob::end(){
  auto e = BlobPtr(*this, data->size());
  return e;
}
*/
