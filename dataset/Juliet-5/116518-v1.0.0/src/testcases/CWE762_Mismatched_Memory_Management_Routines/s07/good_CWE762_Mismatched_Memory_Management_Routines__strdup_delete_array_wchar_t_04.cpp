static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        {
            wchar_t myString[] = L"myString";
            data = wcsdup(myString);
        }
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        {
            wchar_t myString[] = L"myString";
            data = wcsdup(myString);
        }
    }
    if(STATIC_CONST_TRUE)
    {
        free(data);
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t[100];
    }
    if(STATIC_CONST_TRUE)
    {
        delete [] data;
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new wchar_t[100];
    }
    if(STATIC_CONST_TRUE)
    {
        delete [] data;
    }
}
} 
