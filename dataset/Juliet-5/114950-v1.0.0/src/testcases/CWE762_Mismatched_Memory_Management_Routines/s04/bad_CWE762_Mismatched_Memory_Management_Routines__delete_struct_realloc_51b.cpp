namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
<START>
    delete data;
<END>
}
} 
