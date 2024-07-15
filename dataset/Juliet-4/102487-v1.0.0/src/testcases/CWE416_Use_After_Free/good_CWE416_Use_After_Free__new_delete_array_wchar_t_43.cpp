namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
    printWLine(data);
}
void FUN2(wchar_t * &data)
{
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    delete [] data;
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
