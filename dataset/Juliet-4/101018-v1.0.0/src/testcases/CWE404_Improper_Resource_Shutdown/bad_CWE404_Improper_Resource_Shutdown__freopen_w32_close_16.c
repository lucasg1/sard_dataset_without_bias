void FUN0()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    while(1)
    {
        if (data != NULL)
        {
<START>
            _close((int)data);
<END>
        }
        break;
    }
}
