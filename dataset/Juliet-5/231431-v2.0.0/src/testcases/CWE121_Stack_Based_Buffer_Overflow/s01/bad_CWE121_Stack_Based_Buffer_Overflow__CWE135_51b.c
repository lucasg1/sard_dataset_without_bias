void FUN2(void * data);
void FUN3()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN2(data);
}
void FUN2(void * data);
void FUN3()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN2(data);
}
void FUN2(void * data)
{
    {
<START>
        size_t dataLen = strlen((char *)data);
<END>
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printLine((char *)dest);
    }
}
