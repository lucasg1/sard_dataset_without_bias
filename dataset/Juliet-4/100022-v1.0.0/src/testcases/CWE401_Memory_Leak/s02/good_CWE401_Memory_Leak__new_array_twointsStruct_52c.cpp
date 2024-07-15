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
    twoIntsStruct VAR2[100];
    data = VAR2;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    FUN1(data);
}
void FUN3(twoIntsStruct * data);
void FUN7()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
    ; 
}
void FUN2(twoIntsStruct * data)
{
    delete[] data;
}
} 
