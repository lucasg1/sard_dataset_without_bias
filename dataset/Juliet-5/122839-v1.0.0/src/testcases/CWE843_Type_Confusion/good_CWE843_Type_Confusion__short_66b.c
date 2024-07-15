void FUN0(void * dataArray[]);
void FUN1()
{
    void * data;
    void * dataArray[5];
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(void * dataArray[])
{
    void * data = dataArray[2];
    printIntLine(*((int*)data));
}
