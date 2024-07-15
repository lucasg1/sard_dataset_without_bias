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
        {
            FILE *pipe;
<START>
            pipe = POPEN(data, "wb");
<END>
            if (pipe != NULL)
            {
                PCLOSE(pipe);
            }
        }
    }
}
