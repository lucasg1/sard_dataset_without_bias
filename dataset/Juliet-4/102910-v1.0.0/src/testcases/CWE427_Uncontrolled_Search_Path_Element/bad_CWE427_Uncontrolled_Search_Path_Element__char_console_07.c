static int staticFive = 5;
void FUN0()
{
    char * data;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    if(staticFive==5)
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
<START>
    PUTENV(data);
<END>
}
