static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
    {
        printLine("Benign, fixed string");
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
void FUN3()
{
    if(FUN0())
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
