void FUN0(wchar_t * data)
{
<START>
    printWcharLine(data[0]);
<END>
}
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    data = NULL;
    funcPtr(data);
}
