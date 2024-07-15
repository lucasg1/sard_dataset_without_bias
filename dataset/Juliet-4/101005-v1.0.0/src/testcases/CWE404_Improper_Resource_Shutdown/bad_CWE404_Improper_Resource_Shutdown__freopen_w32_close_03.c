void FUN0()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    if(5==5)
    {
        if (data != NULL)
        {
<START>
            _close((int)data);
<END>
        }
    }
}
