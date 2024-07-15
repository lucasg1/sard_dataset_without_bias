void FUN0(twoIntsStruct * data)
{
    printIntLine(data->intOne);
}
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    {
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    FUN0(data);
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
    data = NULL;
    FUN2(data);
}
