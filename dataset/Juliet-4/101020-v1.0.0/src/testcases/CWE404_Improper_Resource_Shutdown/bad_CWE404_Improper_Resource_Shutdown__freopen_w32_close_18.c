void FUN0()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    goto sink;
sink:
    if (data != NULL)
    {
<START>
        _close((int)data);
<END>
    }
}
