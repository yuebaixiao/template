#ifndef __BLOB_H__
#define __BLOB_H__

#include <memory>
#include <string>
#include <vector>

template<typename> class BlobPtr;
template<typename> class Blob;
template<typename T>
bool operator==(const Blob<T>&, const Blob<T>&);
template<typename T>
bool operator!=(const Blob<T>&, const Blob<T>&);

template<typename T> class Blob{
  friend class BlobPtr<T>;
  friend bool operator==<T>(const Blob<T>&, const Blob<T>&);
  friend bool operator!=<T>(const Blob<T>&, const Blob<T>&);
 public:
  typedef T value_type;
  typedef typename std::vector<T>::size_type size_type;
  Blob();
  Blob(std::initializer_list<T>);
  size_type size() const{return data->size();}
  bool empty()const {return data->empty();}
  void push_back(const T& t){data->push_back(t);}
  void push_back(T&& t){data->push_back(std::move(t));}
  void pop_back();
  T& front();
  T& back();

  T& operator[](size_type);
  const T& operator[](size_type)const;

  //StrBlobPtr begin();
  //StrBlobPtr end();

 private:
  std::shared_ptr<std::vector<T>> data;
  void check(size_type, const std::string&) const;
};
//bool operator==(const StrBlob&, const StrBlob&);
//bool operator!=(const StrBlob&, const StrBlob&);


template<typename T>
Blob<T>::Blob() : data(std::make_shared<std::vector<T>>()){}

template<typename T>
Blob<T>::Blob(std::initializer_list<T> il) :
  data(std::make_shared<std::vector<T>>(il)){}



template<typename T>
void Blob<T>::check(size_type i, const std::string& msg)const{
  if(i >= data->size()){
    throw std::out_of_range(msg);
  }
}

template<typename T>
void Blob<T>::pop_back(){
  check(0, "pop_back");
  data->pop_back();
}


template<typename T>
T& Blob<T>::front(){
  check(0, "front");
  return data->front();
}

template<typename T>
T& Blob<T>::back(){
  check(0, "back");
  return data->back();
}


template<typename T>
T& Blob<T>::operator[](size_type idx){
  return (*data)[idx];
}

template<typename T>
const T& Blob<T>::operator[](size_type idx)const{
  return (*data)[idx];
}

#endif
