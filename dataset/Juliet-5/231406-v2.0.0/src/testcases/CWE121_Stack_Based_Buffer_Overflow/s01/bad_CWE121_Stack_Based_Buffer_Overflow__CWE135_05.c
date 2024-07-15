static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    void * data;
    data = NULL;
    if(staticTrue)
    {
        data = (void *)WIDE_STRING;
    }
    if(staticTrue)
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
