namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(struct _twoIntsStruct * dataCopy)
{
    data = dataCopy;
    data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    ; 
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(struct _twoIntsStruct * dataCopy)
{
    data = dataCopy;
    data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    free(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR3(data);
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    NAMESPACE0_FUN1 VAR4(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(struct _twoIntsStruct * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    struct _twoIntsStruct * data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(struct _twoIntsStruct * dataCopy);
    ~NAMESPACE0_FUN1();
private:
    struct _twoIntsStruct * data;
};
}
