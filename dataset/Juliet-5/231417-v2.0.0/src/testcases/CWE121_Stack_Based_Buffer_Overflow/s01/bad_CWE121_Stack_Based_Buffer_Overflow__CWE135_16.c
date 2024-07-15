void FUN0()
{
    void * data;
    data = NULL;
    while(1)
    {
        data = (void *)WIDE_STRING;
        break;
    }
    while(1)
    {
        {
<START>
            size_t dataLen = strlen((char *)data);
<END>
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy(dest, data);
            printLine((char *)dest);
        }
        break;
    }
}
