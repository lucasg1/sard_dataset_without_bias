void FUN0()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    if(GLOBAL_CONST_FIVE==5)
    {
        if (data != NULL)
        {
<START>
            CloseHandle((HANDLE)data);
<END>
        }
    }
}
