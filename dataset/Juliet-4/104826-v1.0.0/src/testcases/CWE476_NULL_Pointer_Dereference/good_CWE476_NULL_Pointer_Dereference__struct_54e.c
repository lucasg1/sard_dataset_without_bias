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
void FUN4(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN4(data);
}
void FUN6(twoIntsStruct * data);
void FUN2(twoIntsStruct * data)
{
    FUN6(data);
}
void FUN8(twoIntsStruct * data);
void FUN9()
{
    twoIntsStruct * data;
    {
        twoIntsStruct tmpData;
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    FUN8(data);
}
void FUN10(twoIntsStruct * data);
void FUN11()
{
    twoIntsStruct * data;
    data = NULL;
    FUN10(data);
}
void FUN1(twoIntsStruct * data);
void FUN8(twoIntsStruct * data)
{
    FUN1(data);
}
void FUN3(twoIntsStruct * data);
void FUN10(twoIntsStruct * data)
{
    FUN3(data);
}
void FUN4(twoIntsStruct * data)
{
    printIntLine(data->intOne);
}
void FUN6(twoIntsStruct * data)
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
