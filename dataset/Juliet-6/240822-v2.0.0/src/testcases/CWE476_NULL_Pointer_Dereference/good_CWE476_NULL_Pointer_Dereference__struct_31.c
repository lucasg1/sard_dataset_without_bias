void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    {
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
        printIntLine(data->intOne);
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
        if (data != NULL)
        {
            printIntLine(data->intOne);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
