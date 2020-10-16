/*
 * @Author: AlexZ33
 * @Description: C/C++模拟JS DataView
 * @FilePath: /C++/CDataView.cpp
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

// 为演示使用，这里仅仅定义unit16和float32两种数据类型
typedef unsigned short unit16; // 无符号short类型
typedef float float32;         // float 浮点数类型
class CDataView
{
public:
    CArrayBuffer *buffer; // 当前视图操作的数据源
    // 当前视图要操作数据源buffer中哪个子区块，使用经典的字节偏移与字节长度表示子区块的范围
    int byteOffset;
    int byteLength;

    //为了简单起见，没做pBuffer非NULL检查及byteOffet / byteLength越界检查等测试
    CDataView(CArrayBuffer *pBuffer, int byteOffset, int byteLength)
    {
        this->buffer = pBuffer;
        this->byteOffset = byteOffset;
        this->byteLength = byteLength;
    }

    // 注意算法，是从CDataView的起始offset位置,然后再加上以Byte为单位的offset
    void setFloat32(int offset, float32 value)
    {
        memcpy(this->buffer->pData + (this->byteOffset + offset), &value, sizeof(float32))
    }
};

CDataView(/* args */)
{
}

CDataView::~CDataView()
{
}
