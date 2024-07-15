namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    void * &dataRef = data;
    data = NULL;
    {
        wchar_t * VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR1 == NULL) {exit(-1);}
        wmemset(VAR1, L'A', 50-1);
        VAR1[50-1] = L'\0';
        data = (void *)VAR1;
    }
    {
        void * data = dataRef;
        {
<START>
            size_t dataLen = strlen((char *)data);
<END>
            void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
            if (dest == NULL) {exit(-1);}
            (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
            printLine((char *)dest);
            free(dest);
        }
    }
}
} 
