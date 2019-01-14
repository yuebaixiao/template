#ifndef __BLOB_H__
#define __BLOB_H__

#include <memory>
#include <string>
#include <vector>

//class StrBlobPtr;
template<typename T> class Blob{
  //friend class StrBlobPtr;
  //friend bool operator==(const StrBlob&, const StrBlob&);
  //friend bool operator!=(const StrBlob&, const StrBlob&);
 public:
  typedef T value_type;
  typedef typename std::vector<T>::size_type size_type;
  StrBlob();
  StrBlob(std::initializer_list<T>);
  size_type size() const{return data->size();}
  bool empty()const {return data->empty();}
  void push_back(const T& t){data->push_back(t);}
  void push_back(T&& t){data->push_back(std::move(t));}
  void pop_back();
  //std::string& front();
  T& back();

  T& operator[](size_type);
  //const std::string& operator[](size_type)const;

  //StrBlobPtr begin();
  //StrBlobPtr end();

 private:
  std::shared_ptr<std::vector<T>> data;
  void check(size_type, const std::string&) const;
};
//bool operator==(const StrBlob&, const StrBlob&);
//bool operator!=(const StrBlob&, const StrBlob&);

#endif
