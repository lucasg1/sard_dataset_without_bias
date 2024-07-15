namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = NULL;
    data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(TwoIntsClass * data);
void FUN0(TwoIntsClass * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(TwoIntsClass * data);
void FUN2(TwoIntsClass * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN4(TwoIntsClass * data)
{
<START>
    delete data;
<END>
}
} 
