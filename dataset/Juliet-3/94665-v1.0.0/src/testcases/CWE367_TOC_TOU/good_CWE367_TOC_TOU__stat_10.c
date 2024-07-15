void FUN0()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN1()
{
    if(globalTrue)
    {
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
    }
}
