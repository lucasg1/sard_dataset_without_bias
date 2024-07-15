namespace NAMESPACE0
{
static int VAR1 = 0;
static wchar_t * FUN0(wchar_t * data)
{
    if(VAR1)
    {
        data = new wchar_t[10];
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN0(data);
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        wcscpy(data, source);
<END>
        printWLine(data);
        delete [] data;
    }
    ;
}
} 
