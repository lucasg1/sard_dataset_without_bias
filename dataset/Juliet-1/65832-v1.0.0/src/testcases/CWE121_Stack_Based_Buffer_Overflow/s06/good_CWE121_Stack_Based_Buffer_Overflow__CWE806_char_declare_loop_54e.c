void FUN0(char * data);
void FUN1()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    FUN0(data);
}
void FUN3(char * data);
void FUN0(char * data)
{
    FUN3(data);
}
void FUN5(char * data);
void FUN6(char * data)
{
    FUN5(data);
}
void FUN6(char * data);
void FUN3(char * data)
{
    FUN6(data);
}
void FUN5(char * data)
{
    {
        char dest[50] = "";
        size_t i, dataLen;
        dataLen = strlen(data);
        for (i = 0; i < dataLen; i++)
        {
            dest[i] = data[i];
        }
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
