namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    wchar_t VAR1;
    data = &VAR1;
    *data = L'A';
    printHexCharLine((char)*data);
    ; 
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    *data = L'A';
    printHexCharLine((char)*data);
    delete data;
}
} 
