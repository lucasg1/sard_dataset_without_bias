static twoIntsStruct * VAR0;
static twoIntsStruct * VAR1;
static twoIntsStruct * VAR2;
void FUN0()
{
    twoIntsStruct * data = VAR1;
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
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    twoIntsStruct * data = VAR2;
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
    VAR2 = data;
    FUN2();
}
