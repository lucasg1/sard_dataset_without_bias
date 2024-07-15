void FUN0(void * dataArray[]);
void FUN1()
{
    void * data;
    void * dataArray[5];
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    data = &VAR0;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(void * dataArray[])
{
    void * data = dataArray[2];
<START>
    printStructLine((twoIntsStruct *)data);
<END>
}
