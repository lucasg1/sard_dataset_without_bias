void FUN0(twoIntsStruct * * dataPtr);
void FUN1()
{
    twoIntsStruct * data;
    ; 
    FUN0(&data);
}
void FUN0(twoIntsStruct * * dataPtr)
{
    twoIntsStruct * data = *dataPtr;
<START>
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
<END>
}
