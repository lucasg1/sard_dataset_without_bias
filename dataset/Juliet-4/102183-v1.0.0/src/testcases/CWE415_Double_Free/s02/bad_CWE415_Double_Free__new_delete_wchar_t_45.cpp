namespace NAMESPACE0
{
static wchar_t * VAR1;
static wchar_t * VAR2;
static wchar_t * VAR3;
void FUN0()
{
    wchar_t * data = VAR1;
<START>
    delete data;
<END>
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    delete data;
    VAR1 = data;
    FUN0();
}
} 
