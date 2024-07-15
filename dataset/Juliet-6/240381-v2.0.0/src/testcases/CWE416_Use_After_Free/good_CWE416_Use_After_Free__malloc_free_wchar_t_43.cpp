namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
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
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    free(data);
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
