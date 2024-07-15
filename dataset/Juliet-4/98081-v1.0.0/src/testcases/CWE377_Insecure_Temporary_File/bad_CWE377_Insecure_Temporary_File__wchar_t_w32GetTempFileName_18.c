void FUN0()
{
    goto sink;
sink:
    {
        wchar_t filename[MAX_PATH] = L"";
        int fileDesc;
        if (GetTempFileNameW(L".", L"bad", 0, filename) == 0)
        {
            exit(1);
        }
        printWLine(filename);
<START>
        fileDesc = OPEN(filename, O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
<END>
        if (fileDesc != -1)
        {
            printLine("Temporary file was opened...now closing file");
            CLOSE(fileDesc);
        }
    }
}
