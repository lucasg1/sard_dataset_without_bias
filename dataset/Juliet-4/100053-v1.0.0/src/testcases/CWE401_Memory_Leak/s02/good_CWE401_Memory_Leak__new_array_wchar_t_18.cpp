namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = new wchar_t[100];
    wcscpy(data, L"A String");
    printWLine(data);
    goto sink;
sink:
    delete[] data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    wchar_t VAR1[100];
    data = VAR1;
    wcscpy(data, L"A String");
    printWLine(data);
    goto sink;
sink:
    ; 
}
} 
