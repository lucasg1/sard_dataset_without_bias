namespace NAMESPACE0
{
void FUN0(void * &data)
{
    data = (void *)WIDE_STRING;
}
void FUN1()
{
    void * data;
    data = NULL;
    FUN0(data);
    {
<START>
        size_t dataLen = strlen((char *)data);
<END>
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
        printLine((char *)dest);
    }
}
} 
