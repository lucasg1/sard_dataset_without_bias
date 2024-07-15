void FUN0(void * * data);
void FUN1()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    FUN0(&data);
}
void FUN2(void * * data);
void FUN3()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN2(&data);
}
void FUN0(void * * data);
void FUN1()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    FUN0(&data);
}
void FUN2(void * * data);
void FUN3()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN2(&data);
}
void FUN0(void * * dataPtr)
{
    void * data = *dataPtr;
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy(dest, data);
        printLine((char *)dest);
    }
}
void FUN2(void * * dataPtr)
{
    void * data = *dataPtr;
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
    }
}
