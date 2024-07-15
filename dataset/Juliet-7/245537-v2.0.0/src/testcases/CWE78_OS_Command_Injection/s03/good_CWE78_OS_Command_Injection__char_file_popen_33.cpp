namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    strcat(data, "*.*");
    {
        char * data = dataRef;
        {
            FILE *pipe;
            pipe = POPEN(data, "w");
            if (pipe != NULL)
            {
                PCLOSE(pipe);
            }
        }
    }
}
} 
