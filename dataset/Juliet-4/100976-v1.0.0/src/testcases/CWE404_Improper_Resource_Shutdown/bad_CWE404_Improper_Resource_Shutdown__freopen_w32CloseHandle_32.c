void FUN0()
{
    FILE * data;
    FILE * *dataPtr1 = &data;
    FILE * *dataPtr2 = &data;
    data = NULL;
    {
        FILE * data = *dataPtr1;
        data = freopen("BadSource_freopen.txt","w+",stdin);
        *dataPtr1 = data;
    }
    {
        FILE * data = *dataPtr2;
        if (data != NULL)
        {
<START>
            CloseHandle((HANDLE)data);
<END>
        }
    }
}
