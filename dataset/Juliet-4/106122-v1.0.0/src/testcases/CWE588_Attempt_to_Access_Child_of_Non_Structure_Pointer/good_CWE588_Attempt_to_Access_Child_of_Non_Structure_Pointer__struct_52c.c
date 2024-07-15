void FUN0(void * data);
void FUN1()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    data = &dataGoodBuffer;
    FUN0(data);
}
void FUN3(void * data);
void FUN0(void * data)
{
    FUN3(data);
}
void FUN3(void * data)
{
    printStructLine((twoIntsStruct *)data);
}
