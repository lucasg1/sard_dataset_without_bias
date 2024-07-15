void FUN0(twoIntsStruct * dataArray[]);
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct * dataArray[5];
    {
        twoIntsStruct tmpData;
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(twoIntsStruct * dataArray[]);
void FUN3()
{
    twoIntsStruct * data;
    twoIntsStruct * dataArray[5];
    data = NULL;
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(twoIntsStruct * dataArray[])
{
    twoIntsStruct * data = dataArray[2];
    printIntLine(data->intOne);
}
void FUN2(twoIntsStruct * dataArray[])
{
    twoIntsStruct * data = dataArray[2];
    if (data != NULL)
    {
        printIntLine(data->intOne);
    }
    else
    {
        printLine("data is NULL");
    }
}
