namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
    goto sink;
sink:
    free(data);
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = new wchar_t;
    goto sink;
sink:
    delete data;
}
} 
