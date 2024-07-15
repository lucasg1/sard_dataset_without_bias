void FUN0()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    if(globalReturnsTrueOrFalse())
    {
        if (data != NULL)
        {
<START>
            CloseHandle((HANDLE)data);
<END>
        }
    }
    else
    {
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
