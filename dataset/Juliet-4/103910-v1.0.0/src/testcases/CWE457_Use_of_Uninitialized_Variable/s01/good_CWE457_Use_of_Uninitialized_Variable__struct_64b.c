void FUN0(void * dataVoidPtr);
void FUN1()
{
    twoIntsStruct data;
    data.intOne = 1;
    data.intTwo = 2;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    twoIntsStruct data;
    ; 
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    twoIntsStruct * dataPtr = (twoIntsStruct *)dataVoidPtr;
    twoIntsStruct data = (*dataPtr);
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
void FUN2(void * dataVoidPtr)
{
    twoIntsStruct * dataPtr = (twoIntsStruct *)dataVoidPtr;
    twoIntsStruct data = (*dataPtr);
    data.intOne = 1;
    data.intTwo = 2;
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
}
