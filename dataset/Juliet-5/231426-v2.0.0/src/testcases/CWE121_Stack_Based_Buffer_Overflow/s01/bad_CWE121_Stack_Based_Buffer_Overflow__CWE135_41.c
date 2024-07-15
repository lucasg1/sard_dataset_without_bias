void FUN0(void * data)
{
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
<START>
        (void)wcscpy(dest, data);
<END>
        printLine((char *)dest);
    }
}
void FUN1()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN0(data);
}
