void FUN0()
{
    void * data;
    data = NULL;
    goto source;
source:
    data = (void *)WIDE_STRING;
    goto sink;
sink:
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
    }
}
void FUN1()
{
    void * data;
    data = NULL;
    goto source;
source:
    data = (void *)CHAR_STRING;
    goto sink;
sink:
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy(dest, data);
        printLine((char *)dest);
    }
}
