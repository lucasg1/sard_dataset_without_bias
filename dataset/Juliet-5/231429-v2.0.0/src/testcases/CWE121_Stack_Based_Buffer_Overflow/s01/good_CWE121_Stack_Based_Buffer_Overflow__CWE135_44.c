void FUN0(void * data)
{
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy(dest, data);
        printLine((char *)dest);
    }
}
void FUN1()
{
    void * data;
    void (*funcPtr) (void *) = FUN0;
    data = NULL;
    data = (void *)CHAR_STRING;
    funcPtr(data);
}
void FUN2(void * data)
{
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
    }
}
void FUN3()
{
    void * data;
    void (*funcPtr) (void *) = FUN2;
    data = NULL;
    data = (void *)WIDE_STRING;
    funcPtr(data);
}
