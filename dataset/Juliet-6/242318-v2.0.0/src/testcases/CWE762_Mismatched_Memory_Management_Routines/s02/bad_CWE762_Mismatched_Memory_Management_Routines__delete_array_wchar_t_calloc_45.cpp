namespace NAMESPACE0
{
static wchar_t * VAR1;
static wchar_t * VAR2;
static wchar_t * VAR3;
void FUN0()
{
    wchar_t * data = VAR1;
<START>
    delete [] data;
<END>
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)calloc(100, sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    VAR1 = data;
    FUN0();
}
} 
