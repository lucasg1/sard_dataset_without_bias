void FUN2(void * dataArray[]);
void FUN3()
{
    void * data;
    void * dataArray[5];
    data = NULL;
    data = (void *)WIDE_STRING;
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN2(void * dataArray[]);
void FUN3()
{
    void * data;
    void * dataArray[5];
    data = NULL;
    data = (void *)WIDE_STRING;
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN2(void * dataArray[])
{
    void * data = dataArray[2];
    {
<START>
        size_t dataLen = strlen((char *)data);
<END>
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printLine((char *)dest);
    }
}
