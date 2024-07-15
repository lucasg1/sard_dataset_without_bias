void FUN0()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = &dataGoodBuffer;
    }
    printStructLine((twoIntsStruct *)data);
}
void FUN1()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    if(globalTrue)
    {
        data = &dataGoodBuffer;
    }
    printStructLine((twoIntsStruct *)data);
}
