namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t[10+1];
    }
    {
        wchar_t source[10+1] = SRC_STRING;
        wcscpy(data, source);
        printWLine(data);
        delete [] data;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new wchar_t[10+1];
    }
    {
        wchar_t source[10+1] = SRC_STRING;
        wcscpy(data, source);
        printWLine(data);
        delete [] data;
    }
}
} 
