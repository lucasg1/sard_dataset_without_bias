void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            wchar_t * filename;
            wchar_t tmpl[] = L"fnXXXXXX";
            int fileDesc;
            filename = MKTEMP(tmpl);
            if (filename == NULL)
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
            wchar_t * filename;
            wchar_t tmpl[] = L"fnXXXXXX";
            int fileDesc;
            filename = MKTEMP(tmpl);
            if (filename == NULL)
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
