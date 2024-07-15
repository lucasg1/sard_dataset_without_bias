static int staticFive = 5;
void FUN0()
{
    void * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (void *)WIDE_STRING;
    }
    if(staticFive==5)
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
