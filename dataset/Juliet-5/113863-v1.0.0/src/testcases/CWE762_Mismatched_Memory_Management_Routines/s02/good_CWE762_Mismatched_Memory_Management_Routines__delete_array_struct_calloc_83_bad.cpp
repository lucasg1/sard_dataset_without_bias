namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(twoIntsStruct * dataCopy)
{
    data = dataCopy;
    data = new twoIntsStruct[100];
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    delete [] data;
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(twoIntsStruct * dataCopy)
{
    data = dataCopy;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    free(data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(twoIntsStruct * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    twoIntsStruct * data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(twoIntsStruct * dataCopy);
    ~NAMESPACE0_FUN1();
private:
    twoIntsStruct * data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR4(data);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    NAMESPACE0_FUN1 VAR5(data);
}
} 
