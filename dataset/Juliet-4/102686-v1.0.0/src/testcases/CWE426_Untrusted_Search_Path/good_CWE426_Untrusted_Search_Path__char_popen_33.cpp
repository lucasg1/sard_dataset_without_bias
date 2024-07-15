namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, GOOD_OS_COMMAND);
    {
        char * data = dataRef;
        {
            FILE *pipe;
            pipe = POPEN(data, "wb");
            if (pipe != NULL)
            {
                PCLOSE(pipe);
            }
        }
    }
}
} 
