void FUN0()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    if(1)
    {
        data = &VAR0;
    }
<START>
    printStructLine((twoIntsStruct *)data);
<END>
}
