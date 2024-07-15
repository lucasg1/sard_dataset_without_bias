void FUN0()
{
    void * data;
    data = NULL;
    goto source;
source:
    data = (void *)WIDE_STRING;
    goto sink;
sink:
    {
<START>
        size_t dataLen = strlen((char *)data);
<END>
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printLine((char *)dest);
    }
}
