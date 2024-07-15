void FUN0(void * dataVoidPtr);
void FUN1()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    FILE * * dataPtr = (FILE * *)dataVoidPtr;
    FILE * data = (*dataPtr);
    if (data != NULL)
    {
<START>
        CloseHandle((HANDLE)data);
<END>
    }
}
