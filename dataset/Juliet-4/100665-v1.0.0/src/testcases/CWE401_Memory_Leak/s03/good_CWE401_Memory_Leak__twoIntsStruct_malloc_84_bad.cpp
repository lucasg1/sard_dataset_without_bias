namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(twoIntsStruct * dataCopy)
{
    data = dataCopy;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
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
NAMESPACE0_FUN0::NAMESPACE0_FUN0(twoIntsStruct * dataCopy)
{
    data = dataCopy;
    data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
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
    NAMESPACE0_FUN0 * VAR4 = new NAMESPACE0_FUN0(data);
    delete VAR4;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    NAMESPACE0_FUN1 * VAR5 = new NAMESPACE0_FUN1(data);
    delete VAR5;
}
} 
