void FUN0()
{
    int h;
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    for(h = 0; h < 1; h++)
    {
        data = &dataGoodBuffer;
    }
    printStructLine((twoIntsStruct *)data);
}
