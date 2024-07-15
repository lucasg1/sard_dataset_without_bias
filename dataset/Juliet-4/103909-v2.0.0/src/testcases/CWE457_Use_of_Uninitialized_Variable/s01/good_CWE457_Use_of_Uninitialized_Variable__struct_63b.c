void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct data;
    data.intOne = 1;
    data.intTwo = 2;
    FUN0(&data);
}
void FUN2(twoIntsStruct * data);
void FUN3()
{
    twoIntsStruct data;
    ; 
    FUN2(&data);
}
void FUN0(twoIntsStruct * dataPtr)
{
    twoIntsStruct data = *dataPtr;
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
void FUN2(twoIntsStruct * dataPtr)
{
    dataPtr->intOne = 1;
    dataPtr->intTwo = 2;
    twoIntsStruct data = *dataPtr;
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
