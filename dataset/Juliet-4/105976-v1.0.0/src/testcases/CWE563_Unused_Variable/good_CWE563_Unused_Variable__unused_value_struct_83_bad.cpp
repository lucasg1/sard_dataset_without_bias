namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(twoIntsStruct dataCopy)
{
    data = dataCopy;
    data.intOne = 0;
    data.intTwo = 0;
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    printStructLine(&data);
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(twoIntsStruct dataCopy)
{
    data = dataCopy;
    data.intOne = 0;
    data.intTwo = 0;
    printStructLine(&data);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    data.intOne = 1;
    data.intTwo = 1;
    printStructLine(&data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct data;
    NAMESPACE0_FUN0 VAR3(data);
}
void FUN1()
{
    twoIntsStruct data;
    NAMESPACE0_FUN1 VAR4(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(twoIntsStruct dataCopy);
    ~NAMESPACE0_FUN0();
private:
    twoIntsStruct data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(twoIntsStruct dataCopy);
    ~NAMESPACE0_FUN1();
private:
    twoIntsStruct data;
};
}
