namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1(TwoIntsClass * data);
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    FUN0(data);
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
    free(data);
}
void FUN1(TwoIntsClass * data)
{
    delete [] data;
}
} 
