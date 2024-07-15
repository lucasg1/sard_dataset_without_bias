void FUN0()
{
    twoIntsStruct * data;
    goto source;
source:
    data = NULL;
    goto sink;
sink:
    if (data != NULL)
    {
        printIntLine(data->intOne);
    }
    else
    {
        printLine("data is NULL");
    }
}
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    goto source;
source:
    {
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    goto sink;
sink:
    printIntLine(data->intOne);
}
