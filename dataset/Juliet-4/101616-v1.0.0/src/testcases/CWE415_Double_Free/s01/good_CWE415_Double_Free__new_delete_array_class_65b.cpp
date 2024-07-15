namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1()
{
    TwoIntsClass * data;
    void (*funcPtr) (TwoIntsClass *) = FUN0;
    data = NULL;
    data = new TwoIntsClass[100];
    funcPtr(data);
}
void FUN2(TwoIntsClass * data);
void FUN3()
{
    TwoIntsClass * data;
    void (*funcPtr) (TwoIntsClass *) = FUN2;
    data = NULL;
    data = new TwoIntsClass[100];
    delete [] data;
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
    delete [] data;
}
void FUN2(TwoIntsClass * data)
{
    ; 
}
} 
