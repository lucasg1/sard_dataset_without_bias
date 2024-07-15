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
<START>
<END>
    ; 
}
} 
