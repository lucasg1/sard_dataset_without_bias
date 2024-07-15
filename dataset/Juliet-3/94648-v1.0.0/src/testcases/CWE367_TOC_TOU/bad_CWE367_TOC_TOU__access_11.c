void FUN0()
{
    if(globalReturnsTrue())
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
<START>
            if (ACCESS(filename, W_OK) == -1)
<END>
            {
                exit(1);
            }
            fileDesc  = OPEN(filename, O_RDWR);
            if (fileDesc == -1)
            {
                exit(1);
            }
            if (WRITE(fileDesc, BAD_SINK_STRING, strlen(BAD_SINK_STRING)) == -1)
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
