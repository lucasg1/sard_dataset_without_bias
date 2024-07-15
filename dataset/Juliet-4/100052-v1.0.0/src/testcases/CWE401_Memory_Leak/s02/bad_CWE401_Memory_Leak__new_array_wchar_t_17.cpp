namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    wchar_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new wchar_t[100];
        wcscpy(data, L"A String");
        printWLine(data);
    }
    for(j = 0; j < 1; j++)
    {
<START>
<END>
        ; 
    }
}
} 
