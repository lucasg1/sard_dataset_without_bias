namespace NAMESPACE0
{
void FUN0()
{
    int h;
    wchar_t * data;
    data = NULL;
    for(h = 0; h < 1; h++)
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
