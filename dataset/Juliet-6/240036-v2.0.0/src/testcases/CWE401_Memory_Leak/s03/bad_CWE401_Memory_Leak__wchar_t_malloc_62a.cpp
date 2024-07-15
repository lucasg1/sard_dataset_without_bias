namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN2()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
<START>
<END>
    ; 
}
} 
