namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    wcscpy(data, L"A String");
    printWLine(data);
    FUN0(data);
}
} 
