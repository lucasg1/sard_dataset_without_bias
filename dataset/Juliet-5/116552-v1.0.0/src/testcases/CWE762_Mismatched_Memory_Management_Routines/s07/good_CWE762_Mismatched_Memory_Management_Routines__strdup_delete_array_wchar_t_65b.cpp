namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    data = NULL;
    data = new wchar_t[100];
    funcPtr(data);
}
void FUN2(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN2;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
    }
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    delete [] data;
}
void FUN2(wchar_t * data)
{
    free(data);
}
} 
