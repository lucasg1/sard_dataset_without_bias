void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN2(data);
}
void FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    data = NULL;
    FUN1(data);
}
void FUN2(wchar_t * data)
{
<START>
    printWcharLine(data[0]);
<END>
}
