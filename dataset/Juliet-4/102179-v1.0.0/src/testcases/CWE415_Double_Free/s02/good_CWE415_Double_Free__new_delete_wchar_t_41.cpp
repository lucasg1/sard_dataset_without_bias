namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    delete data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    FUN0(data);
}
void FUN2(wchar_t * data)
{
    ; 
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    delete data;
    FUN2(data);
}
} 
