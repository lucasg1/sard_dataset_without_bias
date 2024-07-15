void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        strcpy(data, BAD_OS_COMMAND);
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
<START>
        if (SYSTEM(data) <= 0)
<END>
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
}
