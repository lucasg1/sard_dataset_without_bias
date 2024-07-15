namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    void * &dataRef = data;
    data = NULL;
    data = (void *)CHAR_STRING;
    {
        void * data = dataRef;
        {
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * 1);
            (void)strcpy((char *)dest, (char *)data);
            printLine((char *)dest);
        }
    }
}
void FUN1()
{
    void * data;
    void * &dataRef = data;
    data = NULL;
    data = (void *)WIDE_STRING;
    {
        void * data = dataRef;
        {
            size_t dataLen = wcslen((wchar_t *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
            printWLine((wchar_t *)dest);
        }
    }
}
} 
