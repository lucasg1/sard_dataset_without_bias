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
NAMESPACE0_FUN1::NAMESPACE0_FUN1(twoIntsStruct * dataCopy)
{
    data = dataCopy;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    free(data);
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    ; 
}
}
namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR3(data);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    NAMESPACE0_FUN1 VAR4(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(twoIntsStruct * dataCopy)
{
    data = dataCopy;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    free(data);
}
}
