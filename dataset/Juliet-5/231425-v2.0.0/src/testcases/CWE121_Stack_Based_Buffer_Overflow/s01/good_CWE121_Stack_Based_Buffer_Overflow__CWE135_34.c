typedef union
{
    void * unionFirst;
    void * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE135_34_unionType;
void FUN0()
{
    void * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE135_34_unionType myUnion;
    data = NULL;
    data = (void *)CHAR_STRING;
    myUnion.unionFirst = data;
    {
        void * data = myUnion.unionSecond;
        {
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * 1);
            (void)strcpy(dest, data);
            printLine((char *)dest);
        }
    }
}
void FUN1()
{
    void * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE135_34_unionType myUnion;
    data = NULL;
    data = (void *)WIDE_STRING;
    myUnion.unionFirst = data;
    {
        void * data = myUnion.unionSecond;
        {
            size_t dataLen = wcslen((wchar_t *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy(dest, data);
            printWLine((wchar_t *)dest);
        }
    }
}
oid FUN2()
{
    FUN0();
    FUN1();
}
