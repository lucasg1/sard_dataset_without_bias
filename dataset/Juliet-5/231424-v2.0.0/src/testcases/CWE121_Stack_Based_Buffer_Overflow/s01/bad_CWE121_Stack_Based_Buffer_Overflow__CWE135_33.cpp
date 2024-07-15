namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    void * &dataRef = data;
    data = NULL;
    data = (void *)WIDE_STRING;
    {
        void * data = dataRef;
        {
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
<START>
            (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
<END>
            printLine((char *)dest);
        }
    }
}
} 
