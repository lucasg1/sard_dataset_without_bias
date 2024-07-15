void FUN0()
{
    wchar_t * data;
    goto source;
source:
    ; 
    goto sink;
sink:
    data = L"string";
    printWLine(data);
}
void FUN1()
{
    wchar_t * data;
    goto source;
source:
    data = L"string";
    goto sink;
sink:
    printWLine(data);
}
