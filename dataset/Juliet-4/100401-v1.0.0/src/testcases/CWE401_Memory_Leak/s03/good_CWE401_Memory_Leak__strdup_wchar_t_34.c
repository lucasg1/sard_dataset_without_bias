typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE401_Memory_Leak__strdup_wchar_t_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE401_Memory_Leak__strdup_wchar_t_34_unionType myUnion;
    data = NULL;
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"a string");
    printWLine(data);
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        ; 
    }
}
void FUN1()
{
    wchar_t * data;
    CWE401_Memory_Leak__strdup_wchar_t_34_unionType myUnion;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
        printWLine(data);
    }
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        free(data);
    }
}
