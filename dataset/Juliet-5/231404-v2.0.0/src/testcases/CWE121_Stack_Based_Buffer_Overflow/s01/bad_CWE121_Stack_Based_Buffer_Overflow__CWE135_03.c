void FUN0()
{
    void * data;
    data = NULL;
    if(5==5)
    {
        data = (void *)WIDE_STRING;
    }
    if(5==5)
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
