void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
}
void FUN0(wchar_t * data)
{
<START>
    printWcharLine(data[0]);
<END>
}
