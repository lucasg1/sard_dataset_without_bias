void FUN0()
{
    int i,j;
    void * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (void *)WIDE_STRING;
    }
    for(j = 0; j < 1; j++)
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
