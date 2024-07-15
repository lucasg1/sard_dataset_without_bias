namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    data = new wchar_t[10+1];
    {
        wchar_t * data = dataRef;
        {
            wchar_t source[10+1] = SRC_STRING;
            wcscpy(data, source);
            printWLine(data);
            delete [] data;
        }
    }
}
} 
