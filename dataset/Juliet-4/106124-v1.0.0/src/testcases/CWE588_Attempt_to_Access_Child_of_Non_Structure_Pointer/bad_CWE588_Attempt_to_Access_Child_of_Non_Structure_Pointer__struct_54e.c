void FUN0(void * data);
void FUN1(void * data)
{
    FUN0(data);
}
void FUN1(void * data);
void FUN3(void * data)
{
    FUN1(data);
}
void FUN3(void * data);
void FUN5(void * data)
{
    FUN3(data);
}
void FUN5(void * data);
void FUN7()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    data = &VAR0;
    FUN5(data);
}
void FUN0(void * data)
{
<START>
    printStructLine((twoIntsStruct *)data);
<END>
}
