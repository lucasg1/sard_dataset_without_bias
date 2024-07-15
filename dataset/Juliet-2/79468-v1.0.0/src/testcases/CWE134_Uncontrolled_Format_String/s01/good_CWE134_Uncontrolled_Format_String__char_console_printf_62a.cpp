namespace NAMESPACE0
{
void FUN0(char * &data)
{
    strcpy(data, "fixedstringtest");
}
void FUN1(char * &data)
{
    {
        size_t dataLen = strlen(data);
        if (100-dataLen > 1)
        {
            if (fgets(data+dataLen, (int)(100-dataLen), stdin) != NULL)
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
} 
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN3()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    FUN0(data);
    printf(data);
}
void FUN1(char * &data);
void FUN5()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    FUN1(data);
    printf("%s\n", data);
}
} 
