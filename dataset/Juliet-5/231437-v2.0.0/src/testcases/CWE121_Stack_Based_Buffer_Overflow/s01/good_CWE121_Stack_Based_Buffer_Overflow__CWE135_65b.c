void FUN5(void * data);
void FUN6()
{
    void * data;
    void (*funcPtr) (void *) = FUN5;
    data = NULL;
    data = (void *)CHAR_STRING;
    funcPtr(data);
}
void FUN7(void * data);
void FUN8()
{
    void * data;
    void (*funcPtr) (void *) = FUN7;
    data = NULL;
    data = (void *)WIDE_STRING;
    funcPtr(data);
}
void FUN5(void * data);
void FUN6()
{
    void * data;
    void (*funcPtr) (void *) = FUN5;
    data = NULL;
    data = (void *)CHAR_STRING;
    funcPtr(data);
}
void FUN7(void * data);
void FUN8()
{
    void * data;
    void (*funcPtr) (void *) = FUN7;
    data = NULL;
    data = (void *)WIDE_STRING;
    funcPtr(data);
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
