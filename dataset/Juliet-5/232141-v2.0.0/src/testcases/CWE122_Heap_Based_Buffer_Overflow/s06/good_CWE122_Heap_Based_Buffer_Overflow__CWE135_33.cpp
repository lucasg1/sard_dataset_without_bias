namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    void * &dataRef = data;
    data = NULL;
    {
        char * VAR1 = (char *)malloc(50*sizeof(char));
        if (VAR1 == NULL) {exit(-1);}
        memset(VAR1, 'A', 50-1);
        VAR1[50-1] = '\0';
        data = (void *)VAR1;
    }
    {
        void * data = dataRef;
        {
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)calloc(dataLen+1, 1);
            if (dest == NULL) {exit(-1);}
            (void)strcpy((char *)dest, (char *)data);
            printLine((char *)dest);
            free(dest);
        }
    }
}
void FUN1()
{
    void * data;
    void * &dataRef = data;
    data = NULL;
    {
        wchar_t * VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR2 == NULL) {exit(-1);}
        wmemset(VAR2, L'A', 50-1);
        VAR2[50-1] = L'\0';
        data = (void *)VAR2;
    }
    {
        void * data = dataRef;
        {
            size_t dataLen = wcslen((wchar_t *)data);
            void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
            if (dest == NULL) {exit(-1);}
            (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
            printWLine((wchar_t *)dest);
            free(dest);
        }
    }
}
} 
