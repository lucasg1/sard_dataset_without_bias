namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1(TwoIntsClass * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN1(TwoIntsClass * data);
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    delete data;
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
<START>
    delete data;
<END>
}
} 
