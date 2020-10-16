/*
 * @Author: your name
 * @Date: 2020-10-15 16:45:11
 * @LastEditTime: 2020-10-15 17:05:24
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /C++/CArrayBuffer.cpp
 */
// 无符号８bit的char类型被定义为Byte类型, 和TS中的type关键字作用类似
typedef unsigned char Byte;
class CArrayBuffer
{
public:
  // 构造函数
  CArrayBuffer(int byteLength = 8)
  {
    this->_byteLength = byteLength;
    // 分配byteLength个字节的内存
    this->pData = new Byte[byteLength];
  }

  //析构函数, 用于释放分配的pData字节数组内存
  ~CArrayBuffer()
  {
    if (this->pData != NULL)
    {
      delete[] this->pData;
      this->pData = NULL;
    }
  }
  // 使用public方法获取已分配内存的字节长度
  // 由于使用了private且没有提供set方法，因而byteLength是只读的
  // 这意味着你只能在构造函数中才能设置要分配的内存字节长度
  // 这意味着一旦在new之后，再也没机会增加内存容量了
  int byteLength()
  {
    return this->_byteLength;
  }

public:
  Byte *pData; // ArrayBuffer对象指向已经分配的内存字节数组的首地址
private:
  int _byteLength; // 当前内存字节数组的字节数　
};
