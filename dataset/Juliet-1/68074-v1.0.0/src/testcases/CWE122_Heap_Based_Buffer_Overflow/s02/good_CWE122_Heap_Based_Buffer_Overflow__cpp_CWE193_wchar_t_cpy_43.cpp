namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = new wchar_t[10+1];
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
    {
        wchar_t source[10+1] = SRC_STRING;
        wcscpy(data, source);
        printWLine(data);
        delete [] data;
    }
}
} 
