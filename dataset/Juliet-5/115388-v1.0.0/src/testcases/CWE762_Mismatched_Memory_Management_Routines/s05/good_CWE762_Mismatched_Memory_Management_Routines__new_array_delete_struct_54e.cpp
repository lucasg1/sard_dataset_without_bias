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
void FUN4(twoIntsStruct * data);
void FUN5(twoIntsStruct * data)
{
    FUN4(data);
}
void FUN6(twoIntsStruct * data);
void FUN7(twoIntsStruct * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN5(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN5(data);
}
void FUN7(twoIntsStruct * data);
void FUN2(twoIntsStruct * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN1(twoIntsStruct * data);
void FUN13()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    FUN1(data);
}
void FUN3(twoIntsStruct * data);
void FUN15()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(twoIntsStruct * data)
{
    delete data;
}
void FUN6(twoIntsStruct * data)
{
    delete [] data;
}
} 
