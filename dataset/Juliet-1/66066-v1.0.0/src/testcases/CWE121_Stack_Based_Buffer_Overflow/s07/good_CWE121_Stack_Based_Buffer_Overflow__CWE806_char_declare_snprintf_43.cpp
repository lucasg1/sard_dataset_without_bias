namespace NAMESPACE0
{
void FUN0(char * &data)
{
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
}
void FUN1()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    FUN0(data);
    {
        char dest[50] = "";
        SNPRINTF(dest, strlen(data), "%s", data);
        printLine(data);
    }
}
} 
