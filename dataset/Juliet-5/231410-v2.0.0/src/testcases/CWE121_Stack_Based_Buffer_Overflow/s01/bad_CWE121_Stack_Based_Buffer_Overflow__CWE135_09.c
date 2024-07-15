void FUN0()
{
    void * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (void *)WIDE_STRING;
    }
    if(GLOBAL_CONST_TRUE)
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
}
