static FILE * VAR0;
static FILE * VAR1;
void FUN0()
{
    FILE * data = VAR0;
    if (data != NULL)
    {
<START>
        _close((int)data);
<END>
    }
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    VAR0 = data;
    FUN0();
}
