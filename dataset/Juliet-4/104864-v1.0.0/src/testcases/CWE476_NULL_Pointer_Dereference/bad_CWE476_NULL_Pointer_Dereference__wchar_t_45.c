static wchar_t * VAR0;
static wchar_t * VAR1;
static wchar_t * VAR2;
void FUN0()
{
    wchar_t * data = VAR0;
<START>
    printWcharLine(data[0]);
<END>
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    VAR0 = data;
    FUN0();
}
