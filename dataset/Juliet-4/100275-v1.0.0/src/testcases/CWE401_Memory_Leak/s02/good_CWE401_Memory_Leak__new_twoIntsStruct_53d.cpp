namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    twoIntsStruct VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    FUN0(data);
}
void FUN2(twoIntsStruct * data);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    FUN2(data);
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
void FUN9(twoIntsStruct * data);
void FUN5(twoIntsStruct * data)
{
    FUN9(data);
}
void FUN11(twoIntsStruct * data);
void FUN7(twoIntsStruct * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN9(twoIntsStruct * data)
{
    ; 
}
void FUN11(twoIntsStruct * data)
{
    delete data;
}
} 
