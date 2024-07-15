void FUN0()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    {
        void * dataCopy = data;
        void * data = dataCopy;
        {
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * 1);
            (void)strcpy(dest, data);
            printLine((char *)dest);
        }
    }
}
void FUN1()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    {
        void * dataCopy = data;
        void * data = dataCopy;
        {
            size_t dataLen = wcslen((wchar_t *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy(dest, data);
            printWLine((wchar_t *)dest);
        }
    }
}
