namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = NULL;
    data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    TwoIntsClass * * dataPtr = (TwoIntsClass * *)dataVoidPtr;
    TwoIntsClass * data = (*dataPtr);
    delete [] data;
}
void FUN2(void * dataVoidPtr)
{
    TwoIntsClass * * dataPtr = (TwoIntsClass * *)dataVoidPtr;
    TwoIntsClass * data = (*dataPtr);
    free(data);
}
} 
