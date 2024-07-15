void FUN0(FILE * data);
void FUN1()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    FUN0(data);
}
void FUN2(FILE * data);
void FUN0(FILE * data)
{
    FUN2(data);
}
void FUN2(FILE * data)
{
    if (data != NULL)
    {
<START>
        _close((int)data);
<END>
    }
}
