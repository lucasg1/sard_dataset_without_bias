void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    {
        FILE * dataCopy = data;
        FILE * data = dataCopy;
        if (data != NULL)
        {
<START>
            CloseHandle((HANDLE)data);
<END>
        }
    }
}
