void FUN0(void * dataVoidPtr);
void FUN1()
{
    twoIntsStruct data;
    ; 
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    twoIntsStruct * dataPtr = (twoIntsStruct *)dataVoidPtr;
    twoIntsStruct data = (*dataPtr);
<START>
    printIntLine(data.intOne);
    printIntLine(data.intTwo);
<END>
}
