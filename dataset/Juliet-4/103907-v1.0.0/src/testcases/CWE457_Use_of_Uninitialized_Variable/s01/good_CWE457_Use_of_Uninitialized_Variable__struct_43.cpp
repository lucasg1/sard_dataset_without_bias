namespace NAMESPACE0
{
void FUN0(twoIntsStruct &data)
{
    data.intOne = 1;
    data.intTwo = 2;
}
void FUN1()
{
    twoIntsStruct data;
    FUN0(data);
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
void FUN2(twoIntsStruct &data)
{
    ; 
}
void FUN3()
{
    twoIntsStruct data;
    FUN2(data);
    data.intOne = 1;
    data.intTwo = 2;
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
} 
