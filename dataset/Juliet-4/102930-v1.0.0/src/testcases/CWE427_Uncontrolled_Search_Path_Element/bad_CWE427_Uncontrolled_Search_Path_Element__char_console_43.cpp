namespace NAMESPACE0
{
void FUN0(char * &data)
{
    {
        size_t dataLen = strlen(data);
        if (250-dataLen > 1)
        {
            if (fgets(data+dataLen, (int)(250-dataLen), stdin) != NULL)
            {
                dataLen = strlen(data);
                if (dataLen > 0 && data[dataLen-1] == '\n')
                {
                    data[dataLen-1] = '\0';
                }
            }
            else
            {
                printLine("fgets() failed");
                data[dataLen] = '\0';
            }
        }
    }
}
void FUN1()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    FUN0(data);
<START>
    PUTENV(data);
<END>
}
} 
