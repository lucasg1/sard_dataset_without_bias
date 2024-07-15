void FUN0()
{
    void * data;
    data = NULL;
    if(globalFive==5)
    {
        data = (void *)WIDE_STRING;
    }
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        data = (void *)WIDE_STRING;
    }
    if(globalFive==5)
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
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (void *)CHAR_STRING;
    }
    if(globalFive==5)
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
    if(globalFive==5)
    {
        data = (void *)CHAR_STRING;
    }
    if(globalFive==5)
    {
        {
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * 1);
            (void)strcpy(dest, data);
            printLine((char *)dest);
        }
    }
}
