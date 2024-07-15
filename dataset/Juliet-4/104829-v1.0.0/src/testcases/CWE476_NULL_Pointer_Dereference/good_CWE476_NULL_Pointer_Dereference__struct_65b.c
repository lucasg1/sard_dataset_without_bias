void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN0;
    {
        twoIntsStruct tmpData;
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    funcPtr(data);
}
void FUN2(twoIntsStruct * data);
void FUN3()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN2;
    data = NULL;
    funcPtr(data);
}
void FUN0(twoIntsStruct * data)
{
    printIntLine(data->intOne);
}
void FUN2(twoIntsStruct * data)
{
    if (data != NULL)
    {
        printIntLine(data->intOne);
    }
    else
    {
        printLine("data is NULL");
    }
}
