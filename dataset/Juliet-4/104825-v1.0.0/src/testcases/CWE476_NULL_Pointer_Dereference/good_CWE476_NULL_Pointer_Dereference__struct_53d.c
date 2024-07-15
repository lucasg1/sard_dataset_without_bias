void FUN0(twoIntsStruct * data);
void FUN1(twoIntsStruct * data)
{
    FUN0(data);
}
void FUN2(twoIntsStruct * data);
void FUN3(twoIntsStruct * data)
{
    FUN2(data);
}
void FUN1(twoIntsStruct * data);
void FUN5()
{
    twoIntsStruct * data;
    {
        twoIntsStruct tmpData;
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    FUN1(data);
}
void FUN3(twoIntsStruct * data);
void FUN7()
{
    twoIntsStruct * data;
    data = NULL;
    FUN3(data);
}
void FUN9(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN9(data);
}
void FUN11(twoIntsStruct * data);
void FUN2(twoIntsStruct * data)
{
    FUN11(data);
}
void FUN9(twoIntsStruct * data)
{
    printIntLine(data->intOne);
}
void FUN11(twoIntsStruct * data)
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
