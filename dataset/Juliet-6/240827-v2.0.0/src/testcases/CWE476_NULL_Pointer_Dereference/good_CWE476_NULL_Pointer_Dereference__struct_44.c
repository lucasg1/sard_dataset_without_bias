void FUN0(twoIntsStruct * data)
{
    printIntLine(data->intOne);
}
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    void (*funcPtr) (twoIntsStruct *) = FUN0;
    {
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    funcPtr(data);
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
void FUN3()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN2;
    data = NULL;
    funcPtr(data);
}
