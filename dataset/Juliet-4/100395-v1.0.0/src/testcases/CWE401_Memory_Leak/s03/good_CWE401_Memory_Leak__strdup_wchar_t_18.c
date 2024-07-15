void FUN0()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
        printWLine(data);
    }
    goto sink;
sink:
    free(data);
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"a string");
    printWLine(data);
    goto sink;
sink:
    ; 
}
