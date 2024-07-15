void FUN0()
{
    int j;
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    for(j = 0; j < 1; j++)
    {
        if (data != NULL)
        {
<START>
            _close((int)data);
<END>
        }
    }
}
