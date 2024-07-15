void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
