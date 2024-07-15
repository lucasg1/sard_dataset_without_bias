void FUN0(void * dataVoidPtr);
void FUN1()
{
    twoIntsStruct * data;
    {
        twoIntsStruct tmpData;
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    twoIntsStruct * * dataPtr = (twoIntsStruct * *)dataVoidPtr;
    twoIntsStruct * data = (*dataPtr);
    printIntLine(data->intOne);
}
void FUN2(void * dataVoidPtr)
{
    twoIntsStruct * * dataPtr = (twoIntsStruct * *)dataVoidPtr;
    twoIntsStruct * data = (*dataPtr);
    if (data != NULL)
    {
        printIntLine(data->intOne);
    }
    else
    {
        printLine("data is NULL");
    }
}
