void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    {
        twoIntsStruct tmpData;
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    FUN0(data);
}
void FUN2(twoIntsStruct * data);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    FUN2(data);
}
void FUN5(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN5(data);
}
void FUN7(twoIntsStruct * data);
void FUN2(twoIntsStruct * data)
{
    FUN7(data);
}
void FUN5(twoIntsStruct * data)
{
    printIntLine(data->intOne);
}
void FUN7(twoIntsStruct * data)
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
