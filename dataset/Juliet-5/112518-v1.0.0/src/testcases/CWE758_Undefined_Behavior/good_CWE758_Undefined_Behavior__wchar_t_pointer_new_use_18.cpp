namespace NAMESPACE0
{
void FUN0()
{
    goto sink;
sink:
    {
        wchar_t * data;
        data = L"string";
        wchar_t * * pointer = new wchar_t *;
        *pointer = data; 
        {
            wchar_t * data = *pointer;
            printWLine(data);
        }
        delete pointer;
    }
}
} 
