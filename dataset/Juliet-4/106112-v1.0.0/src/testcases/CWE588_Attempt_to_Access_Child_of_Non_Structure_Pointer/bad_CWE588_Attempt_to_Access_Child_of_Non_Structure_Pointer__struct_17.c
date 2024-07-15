void FUN0()
{
    int i;
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    for(i = 0; i < 1; i++)
    {
        data = &VAR0;
    }
<START>
    printStructLine((twoIntsStruct *)data);
<END>
}
