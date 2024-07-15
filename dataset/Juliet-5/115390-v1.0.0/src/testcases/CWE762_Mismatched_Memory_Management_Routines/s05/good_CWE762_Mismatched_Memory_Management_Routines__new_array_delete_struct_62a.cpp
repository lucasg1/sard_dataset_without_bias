namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = new twoIntsStruct;
}
void FUN1(twoIntsStruct * &data)
{
    data = new twoIntsStruct[100];
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    FUN0(data);
    delete data;
}
void FUN1(twoIntsStruct * &data);
void FUN5()
{
    twoIntsStruct * data;
    data = NULL;
    FUN1(data);
    delete [] data;
}
} 
