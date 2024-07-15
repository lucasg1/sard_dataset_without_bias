void FUN0()
{
    void * data;
    data = NULL;
    if(1)
    {
        data = (void *)WIDE_STRING;
    }
    if(0)
    {
        printLine("Benign, fixed string");
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
    if(1)
    {
        data = (void *)WIDE_STRING;
    }
    if(1)
    {
        {
            size_t dataLen = wcslen((wchar_t *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy(dest, data);
            printWLine((wchar_t *)dest);
        }
    }
}
void FUN2()
{
    void * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (void *)CHAR_STRING;
    }
    if(1)
    {
        {
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * 1);
            (void)strcpy(dest, data);
            printLine((char *)dest);
        }
    }
}
void FUN3()
{
    void * data;
    data = NULL;
    if(1)
    {
        data = (void *)CHAR_STRING;
    }
    if(1)
    {
        {
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * 1);
            (void)strcpy(dest, data);
            printLine((char *)dest);
        }
    }
}
