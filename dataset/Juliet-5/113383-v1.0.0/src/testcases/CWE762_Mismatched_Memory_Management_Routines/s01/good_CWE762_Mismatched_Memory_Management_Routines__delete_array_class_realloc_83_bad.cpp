namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(TwoIntsClass * dataCopy)
{
    data = dataCopy;
    data = NULL;
    data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    free(data);
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(TwoIntsClass * dataCopy)
{
    data = dataCopy;
    data = new TwoIntsClass[100];
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    delete [] data;
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(TwoIntsClass * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    TwoIntsClass * data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(TwoIntsClass * dataCopy);
    ~NAMESPACE0_FUN1();
private:
    TwoIntsClass * data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR4(data);
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    NAMESPACE0_FUN1 VAR5(data);
}
} 
