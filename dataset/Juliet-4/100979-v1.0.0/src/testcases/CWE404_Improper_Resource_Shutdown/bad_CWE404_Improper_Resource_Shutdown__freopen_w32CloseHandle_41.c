void FUN0(FILE * data)
{
    if (data != NULL)
    {
<START>
        CloseHandle((HANDLE)data);
<END>
    }
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    FUN0(data);
}
