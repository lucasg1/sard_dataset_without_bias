namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = L"string";
}
void FUN1()
{
    wchar_t * data;
    FUN0(data);
    printWLine(data);
}
void FUN2(wchar_t * &data)
{
    ; 
}
void FUN3()
{
    wchar_t * data;
    FUN2(data);
    data = L"string";
    printWLine(data);
}
} 
