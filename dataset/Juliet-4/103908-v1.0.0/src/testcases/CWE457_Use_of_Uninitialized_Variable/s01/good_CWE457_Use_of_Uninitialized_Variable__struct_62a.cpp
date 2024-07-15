namespace NAMESPACE0
{
void FUN0(twoIntsStruct &data)
{
    data.intOne = 1;
    data.intTwo = 2;
}
void FUN1(twoIntsStruct &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct &data);
void FUN3()
{
    twoIntsStruct data;
    FUN0(data);
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
void FUN1(twoIntsStruct &data);
void FUN5()
{
    twoIntsStruct data;
    FUN1(data);
    data.intOne = 1;
    data.intTwo = 2;
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
} 
