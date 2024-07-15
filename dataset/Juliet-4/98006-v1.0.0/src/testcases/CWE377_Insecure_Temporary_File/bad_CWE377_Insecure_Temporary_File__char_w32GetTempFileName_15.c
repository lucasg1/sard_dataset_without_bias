void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char filename[MAX_PATH] = "";
        int fileDesc;
        if (GetTempFileNameA(".", "bad", 0, filename) == 0)
        {
            exit(1);
        }
        printLine(filename);
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
