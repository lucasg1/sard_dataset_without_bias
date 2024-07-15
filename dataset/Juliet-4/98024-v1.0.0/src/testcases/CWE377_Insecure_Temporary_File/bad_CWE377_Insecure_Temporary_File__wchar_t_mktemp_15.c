void FUN0()
{
    switch(6)
    {
    case 6:
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
<START>
        fileDesc = OPEN(filename, O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
<END>
        if (fileDesc != -1)
        {
            printLine("Temporary file was opened...now closing file");
            CLOSE(fileDesc);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
