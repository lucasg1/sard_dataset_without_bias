void * FUN0(void * data)
{
    data = (void *)CHAR_STRING;
    return data;
}
void FUN1()
{
    void * data;
    data = NULL;
    data = FUN0(data);
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy(dest, data);
        printLine((char *)dest);
    }
}
void * FUN2(void * data)
{
    data = (void *)WIDE_STRING;
    return data;
}
void FUN3()
{
    void * data;
    data = NULL;
    data = FUN2(data);
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
    }
}
