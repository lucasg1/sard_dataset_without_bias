namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1(TwoIntsClass * data);
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    FUN0(data);
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = NULL;
    data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
    delete data;
}
void FUN1(TwoIntsClass * data)
{
    free(data);
}
} 
