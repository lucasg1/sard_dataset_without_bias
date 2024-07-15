static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = &dataGoodBuffer;
    }
    printStructLine((twoIntsStruct *)data);
}
void FUN3()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    if(FUN0())
    {
        data = &dataGoodBuffer;
    }
    printStructLine((twoIntsStruct *)data);
}
