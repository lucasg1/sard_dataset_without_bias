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
    data = new twoIntsStruct[100];
    FUN1(data);
}
void FUN3(twoIntsStruct * data);
void FUN7()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    delete [] data;
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN9(twoIntsStruct * data);
void FUN10(twoIntsStruct * data)
{
    FUN9(data);
}
void FUN11(twoIntsStruct * data);
void FUN12(twoIntsStruct * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN10(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN10(data);
}
void FUN12(twoIntsStruct * data);
void FUN2(twoIntsStruct * data)
{
    FUN12(data);
}
} 
namespace NAMESPACE0
{
void FUN9(twoIntsStruct * data)
{
    delete [] data;
}
void FUN11(twoIntsStruct * data)
{
    ; 
}
} 
