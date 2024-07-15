namespace NAMESPACE0
{
void FUN0(TwoIntsClass * * data);
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    FUN0(&data);
}
void FUN2(TwoIntsClass * * data);
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * * dataPtr)
{
    TwoIntsClass * data = *dataPtr;
    delete [] data;
}
void FUN2(TwoIntsClass * * dataPtr)
{
    TwoIntsClass * data = *dataPtr;
    free(data);
}
} 
