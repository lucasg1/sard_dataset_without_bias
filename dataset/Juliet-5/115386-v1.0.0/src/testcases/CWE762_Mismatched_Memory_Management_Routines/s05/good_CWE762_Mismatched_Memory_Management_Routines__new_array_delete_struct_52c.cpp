namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data);
void FUN1(twoIntsStruct * data)
{
    FUN0(data);
}
void FUN2(twoIntsStruct * data);
void FUN3(twoIntsStruct * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(twoIntsStruct * data);
void FUN5()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    FUN1(data);
}
void FUN3(twoIntsStruct * data);
void FUN7()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
    delete data;
}
void FUN2(twoIntsStruct * data)
{
    delete [] data;
}
} 
