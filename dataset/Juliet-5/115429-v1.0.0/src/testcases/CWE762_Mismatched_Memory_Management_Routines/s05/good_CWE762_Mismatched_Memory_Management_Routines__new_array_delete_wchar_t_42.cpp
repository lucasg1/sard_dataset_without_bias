namespace NAMESPACE0
{
static wchar_t * FUN0(wchar_t * data)
{
    data = new wchar_t;
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = FUN0(data);
    delete data;
}
static wchar_t * FUN2(wchar_t * data)
{
    data = new wchar_t[100];
    return data;
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = FUN2(data);
    delete [] data;
}
} 
