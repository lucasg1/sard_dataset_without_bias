void FUN0()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    switch(6)
    {
    case 6:
        if (data != NULL)
        {
<START>
            CloseHandle((HANDLE)data);
<END>
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
