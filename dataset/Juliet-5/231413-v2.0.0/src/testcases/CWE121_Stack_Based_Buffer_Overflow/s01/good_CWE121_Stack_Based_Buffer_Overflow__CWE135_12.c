void FUN0()
{
    void * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (void *)WIDE_STRING;
    }
    else
    {
        data = (void *)WIDE_STRING;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            size_t dataLen = wcslen((wchar_t *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy(dest, data);
            printWLine((wchar_t *)dest);
        }
    }
    else
    {
        {
            size_t dataLen = wcslen((wchar_t *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy(dest, data);
            printWLine((wchar_t *)dest);
        }
    }
}
void FUN1()
{
    void * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (void *)CHAR_STRING;
    }
    else
    {
        data = (void *)CHAR_STRING;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * 1);
            (void)strcpy(dest, data);
            printLine((char *)dest);
        }
    }
    else
    {
        {
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * 1);
            (void)strcpy(dest, data);
            printLine((char *)dest);
        }
    }
}
