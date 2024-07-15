void FUN0()
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
<START>
            size_t dataLen = strlen((char *)data);
<END>
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy(dest, data);
            printLine((char *)dest);
        }
    }
}
