void FUN0()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    if(GLOBAL_CONST_TRUE)
    {
        if (data != NULL)
        {
<START>
            _close((int)data);
<END>
        }
    }
}
