void FUN0()
{
    void * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (void *)WIDE_STRING;
    }
    if(globalReturnsTrue())
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
