void FUN0(void * data);
void FUN1()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    data = &VAR0;
    FUN0(data);
}
void FUN2(void * data);
void FUN0(void * data)
{
    FUN2(data);
}
void FUN2(void * data)
{
<START>
    printStructLine((twoIntsStruct *)data);
<END>
}
