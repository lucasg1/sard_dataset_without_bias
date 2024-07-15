void FUN0(void * dataArray[]);
void FUN1()
{
    void * data;
    void * dataArray[5];
    data = NULL;
    {
        char charBuffer = 'a';
        data = &charBuffer;
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(void * dataArray[])
{
    void * data = dataArray[2];
<START>
    printIntLine(*((int*)data));
<END>
}
