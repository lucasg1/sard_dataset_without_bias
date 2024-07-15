void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char filename[MAX_PATH] = "";
            int fileDesc;
            if (GetTempFileNameA(".", "good", rand() + 1, filename) == 0)
            {
                exit(1);
            }
            printLine(filename);
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
            char filename[MAX_PATH] = "";
            int fileDesc;
            if (GetTempFileNameA(".", "good", rand() + 1, filename) == 0)
            {
                exit(1);
            }
            printLine(filename);
            fileDesc = OPEN(filename, O_RDWR|O_CREAT|O_EXCL, S_IREAD|S_IWRITE);
            if (fileDesc != -1)
            {
                printLine("Temporary file was opened...now closing file");
                CLOSE(fileDesc);
            }
        }
    }
}
