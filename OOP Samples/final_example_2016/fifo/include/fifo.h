#ifndef FIFO_H
#define FIFO_H

#define BUFFER_FULL -1
#define BUFFER_ERROR -2
#define BUFFER_OK 1
#include <cstdlib>

template <typename T>
class fifo
{
    int writePtr;
    int readPtr;
    int maxSize;
    T *fifoArray;

    public:
        fifo(int);
        virtual ~fifo();
        T read();
        int write(T &);
        T operator[](int index);
        fifo<T> operator=(const fifo<T> &);
    protected:

    private:
        int readCurrentSize();
};

template <typename T>
fifo<T>::fifo(int fifoSize){
  readPtr = 0;
  writePtr = 0;
  maxSize = fifoSize;
  fifoArray = new T [fifoSize];
}

template <typename T>
T fifo<T>::read(){
  if(readPtr != writePtr){
     readPtr = readPtr % maxSize;
     return fifoArray[readPtr ++];
  }
}

template <typename T>
int fifo<T>::write(T & in){
  if(readCurrentSize() == maxSize - 1) //leave one empty location
    return BUFFER_FULL;
  else{
     writePtr = writePtr % maxSize;
     fifoArray[ writePtr ++] = in;
  }
  return BUFFER_OK;
}

template <typename T>
int fifo<T>::readCurrentSize(){
    if(readPtr <= writePtr)
      return abs(writePtr - readPtr);
    else
      return maxSize - abs(writePtr - readPtr);
}

template <typename T>
T fifo<T>::operator[](int index){

  if (writePtr != readPtr) {
    if(writePtr > readPtr) {
      if(index >= readPtr && index < writePtr)
        return fifoArray[index];
    } else {
      if(index >= readPtr || index < writePtr)
        return fifoArray[index];
    }
  }
  return BUFFER_ERROR;
}

template <typename T>
fifo<T> fifo<T>::operator=(const fifo<T> & oIn){
  if(maxSize == oIn.maxSize) {
     writePtr = oIn.writePtr;
     readPtr = oIn.readPtr;
     for(int i = 0; i < maxSize; i ++)
        fifoArray[i] = oIn.fifoArray[i];
  }

  return *this;
}

template <typename T>

fifo<T>::~fifo(){

  delete []fifoArray;
}



#endif // FIFO_H
