void FUN0()
{
    if(5==5)
    {
        {
            wchar_t * filename;
            int fileDesc;
            filename = TEMPNAM(NULL, NULL);
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
            free(filename);
        }
    }
}
