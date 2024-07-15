namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = new wchar_t[100];
        wcscpy(data, L"A String");
        printWLine(data);
        break;
    }
    while(1)
    {
<START>
<END>
        ; 
        break;
    }
}
} 
