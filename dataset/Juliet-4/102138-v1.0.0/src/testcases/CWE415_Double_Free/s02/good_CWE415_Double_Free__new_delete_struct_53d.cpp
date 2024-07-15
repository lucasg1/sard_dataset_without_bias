namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    FUN0(data);
}
void FUN2(twoIntsStruct * data);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    delete data;
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(twoIntsStruct * data);
void FUN6(twoIntsStruct * data)
{
    FUN5(data);
}
void FUN7(twoIntsStruct * data);
void FUN8(twoIntsStruct * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN6(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN6(data);
}
void FUN8(twoIntsStruct * data);
void FUN2(twoIntsStruct * data)
{
    FUN8(data);
}
} 
namespace NAMESPACE0
{
void FUN5(twoIntsStruct * data)
{
    delete data;
}
void FUN7(twoIntsStruct * data)
{
    ; 
}
} 
