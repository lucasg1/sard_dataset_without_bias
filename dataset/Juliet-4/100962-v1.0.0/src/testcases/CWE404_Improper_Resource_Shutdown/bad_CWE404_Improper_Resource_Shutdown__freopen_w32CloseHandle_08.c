static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    if(FUN0())
    {
        if (data != NULL)
        {
<START>
            CloseHandle((HANDLE)data);
<END>
        }
    }
}
