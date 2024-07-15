namespace NAMESPACE0
{
void FUN0(TwoIntsClass &data)
{
    data.intOne = 1;
    data.intTwo = 2;
}
void FUN1(TwoIntsClass &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass &data);
void FUN3()
{
    TwoIntsClass data;
    FUN0(data);
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
void FUN1(TwoIntsClass &data);
void FUN5()
{
    TwoIntsClass data;
    FUN1(data);
    data.intOne = 1;
    data.intTwo = 2;
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
} 
