static FILE * FUN0(FILE * data)
{
    data = freopen("BadSource_freopen.txt","w+",stdin);
    return data;
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = FUN0(data);
    if (data != NULL)
    {
<START>
        CloseHandle((HANDLE)data);
<END>
    }
}
