void FUN0(FILE * data)
{
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
    void (*funcPtr) (FILE *) = FUN0;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    funcPtr(data);
}
