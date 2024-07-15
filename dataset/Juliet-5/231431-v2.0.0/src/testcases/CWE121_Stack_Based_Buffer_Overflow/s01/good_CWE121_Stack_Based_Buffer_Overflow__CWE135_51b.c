void FUN5(void * data);
void FUN6()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    FUN5(data);
}
void FUN7(void * data);
void FUN8()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN7(data);
}
void FUN5(void * data);
void FUN6()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    FUN5(data);
}
void FUN7(void * data);
void FUN8()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN7(data);
}
void FUN5(void * data)
{
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy(dest, data);
        printLine((char *)dest);
    }
}
void FUN7(void * data)
{
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
    }
}
