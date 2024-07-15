void * VAR0;
void * VAR1;
void FUN0()
{
    void * data = VAR1;
    printStructLine((twoIntsStruct *)data);
}
void FUN1()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR2 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    data = &dataGoodBuffer;
    VAR1 = data;
    FUN0();
}
