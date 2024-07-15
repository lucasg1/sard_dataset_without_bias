void FUN0()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = (wchar_t *)calloc(100, sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
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
    wcscpy(data, L"A String");
    printWLine(data);
    goto sink;
sink:
    ; 
}
