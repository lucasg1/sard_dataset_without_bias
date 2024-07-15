namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    data = NULL;
    data = new wchar_t;
    *data = L'A';
    printHexCharLine((char)*data);
    funcPtr(data);
}
} 
