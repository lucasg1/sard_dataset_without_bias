void FUN5(void * dataArray[]);
void FUN6()
{
    void * data;
    void * dataArray[5];
    data = NULL;
    data = (void *)CHAR_STRING;
    dataArray[2] = data;
    FUN5(dataArray);
}
void FUN7(void * dataArray[]);
void FUN8()
{
    void * data;
    void * dataArray[5];
    data = NULL;
    data = (void *)WIDE_STRING;
    dataArray[2] = data;
    FUN7(dataArray);
}
void FUN5(void * dataArray[]);
void FUN6()
{
    void * data;
    void * dataArray[5];
    data = NULL;
    data = (void *)CHAR_STRING;
    dataArray[2] = data;
    FUN5(dataArray);
}
void FUN7(void * dataArray[]);
void FUN8()
{
    void * data;
    void * dataArray[5];
    data = NULL;
    data = (void *)WIDE_STRING;
    dataArray[2] = data;
    FUN7(dataArray);
}
void FUN5(void * dataArray[])
{
    void * data = dataArray[2];
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy(dest, data);
        printLine((char *)dest);
    }
}
void FUN7(void * dataArray[])
{
    void * data = dataArray[2];
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
    }
}
