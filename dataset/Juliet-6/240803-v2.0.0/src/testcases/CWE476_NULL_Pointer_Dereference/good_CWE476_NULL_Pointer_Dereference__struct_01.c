void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    {
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    printIntLine(data->intOne);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    if (data != NULL)
    {
        printIntLine(data->intOne);
    }
    else
    {
        printLine("data is NULL");
    }
}
