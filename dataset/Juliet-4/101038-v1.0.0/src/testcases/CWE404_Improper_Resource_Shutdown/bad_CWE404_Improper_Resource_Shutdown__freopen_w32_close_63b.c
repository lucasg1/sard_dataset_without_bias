void FUN0(FILE * * dataPtr);
void FUN1()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    FUN0(&data);
}
void FUN0(FILE * * dataPtr)
{
    FILE * data = *dataPtr;
    if (data != NULL)
    {
<START>
        _close((int)data);
<END>
    }
}
