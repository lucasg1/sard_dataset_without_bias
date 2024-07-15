void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            wchar_t filename[MAX_PATH] = L"";
            int fileDesc;
            if (GetTempFileNameW(L".", L"good", rand() + 1, filename) == 0)
            {
                exit(1);
            }
            printWLine(filename);
            fileDesc = OPEN(filename, O_RDWR|O_CREAT|O_EXCL, S_IREAD|S_IWRITE);
            if (fileDesc != -1)
            {
                printLine("Temporary file was opened...now closing file");
                CLOSE(fileDesc);
            }
        }
    }
    else
    {
        {
            wchar_t filename[MAX_PATH] = L"";
            int fileDesc;
            if (GetTempFileNameW(L".", L"good", rand() + 1, filename) == 0)
            {
                exit(1);
            }
            printWLine(filename);
            fileDesc = OPEN(filename, O_RDWR|O_CREAT|O_EXCL, S_IREAD|S_IWRITE);
            if (fileDesc != -1)
            {
                printLine("Temporary file was opened...now closing file");
                CLOSE(fileDesc);
            }
        }
    }
}
