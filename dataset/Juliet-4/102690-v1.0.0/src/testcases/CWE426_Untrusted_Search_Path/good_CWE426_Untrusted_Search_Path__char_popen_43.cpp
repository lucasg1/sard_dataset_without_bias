namespace NAMESPACE0
{
void FUN0(char * &data)
{
    strcpy(data, GOOD_OS_COMMAND);
}
void FUN1()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    FUN0(data);
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
