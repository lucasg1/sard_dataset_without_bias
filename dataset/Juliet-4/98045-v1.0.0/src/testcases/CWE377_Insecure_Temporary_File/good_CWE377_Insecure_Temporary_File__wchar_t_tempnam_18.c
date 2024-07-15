void FUN0()
{
    goto sink;
sink:
    {
        wchar_t * filename;
        int fileDesc;
        filename = TEMPNAM(NULL, NULL);
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
        free(filename);
    }
}
