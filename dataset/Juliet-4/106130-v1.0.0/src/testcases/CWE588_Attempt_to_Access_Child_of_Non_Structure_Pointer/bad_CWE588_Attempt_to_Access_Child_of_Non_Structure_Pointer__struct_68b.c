void * VAR0;
void * VAR1;
void FUN0();
void FUN1()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR2 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    data = &VAR2;
    VAR0 = data;
    FUN0();
}
extern void * VAR0;
extern void * VAR1;
void FUN0()
{
    void * data = VAR0;
<START>
    printStructLine((twoIntsStruct *)data);
<END>
}
