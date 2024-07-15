static FILE * VAR0;
static FILE * VAR1;
void FUN0()
{
    FILE * data = VAR1;
    if (data != NULL)
    {
        fclose(data);
    }
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    VAR1 = data;
    FUN0();
}
