void * FUN0(void * data)
{
    data = (void *)WIDE_STRING;
    return data;
}
void FUN1()
{
    void * data;
    data = NULL;
    data = FUN0(data);
    {
<START>
        size_t dataLen = strlen((char *)data);
<END>
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printLine((char *)dest);
    }
}
