void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
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
