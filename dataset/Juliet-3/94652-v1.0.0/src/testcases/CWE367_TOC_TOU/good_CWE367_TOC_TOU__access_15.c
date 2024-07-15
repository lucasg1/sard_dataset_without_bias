void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char filename[100] = "";
        int fileDesc = -1;
        if (fgets(filename, 100, stdin) == NULL)
        {
            printLine("fgets() failed");
            filename[0] = '\0';
        }
        if (strlen(filename) > 0)
        {
            filename[strlen(filename)-1] = '\0'; 
        }
        fileDesc  = OPEN(filename, O_RDWR);
        if (fileDesc == -1)
        {
            exit(1);
        }
        if (WRITE(fileDesc, GOOD_SINK_STRING, strlen(GOOD_SINK_STRING)) == -1)
        {
            exit(1);
        }
        if (fileDesc != -1)
        {
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
        char filename[100] = "";
        int fileDesc = -1;
        if (fgets(filename, 100, stdin) == NULL)
        {
            printLine("fgets() failed");
            filename[0] = '\0';
        }
        if (strlen(filename) > 0)
        {
            filename[strlen(filename)-1] = '\0'; 
        }
        fileDesc  = OPEN(filename, O_RDWR);
        if (fileDesc == -1)
        {
            exit(1);
        }
        if (WRITE(fileDesc, GOOD_SINK_STRING, strlen(GOOD_SINK_STRING)) == -1)
        {
            exit(1);
        }
        if (fileDesc != -1)
        {
            CLOSE(fileDesc);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
