namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[100];
    data = dataBuffer;
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    {
        char * data = dataRef;
        {
            char dest[50] = "";
            strncat(dest, data, strlen(data));
            dest[50-1] = '\0'; 
            printLine(data);
        }
    }
}
} 
