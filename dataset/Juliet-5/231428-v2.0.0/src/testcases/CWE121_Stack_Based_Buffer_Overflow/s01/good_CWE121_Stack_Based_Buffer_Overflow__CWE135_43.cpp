namespace NAMESPACE0
{
void FUN0(void * &data)
{
    data = (void *)CHAR_STRING;
}
void FUN1()
{
    void * data;
    data = NULL;
    FUN0(data);
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy((char *)dest, (char *)data);
        printLine((char *)dest);
    }
}
void FUN2(void * &data)
{
    data = (void *)WIDE_STRING;
}
void FUN3()
{
    void * data;
    data = NULL;
    FUN2(data);
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
        printWLine((wchar_t *)dest);
    }
}
} 
