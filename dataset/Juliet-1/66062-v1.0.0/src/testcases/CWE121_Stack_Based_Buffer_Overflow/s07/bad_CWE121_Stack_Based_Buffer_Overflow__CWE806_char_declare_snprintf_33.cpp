namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[100];
    data = dataBuffer;
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    {
        char * data = dataRef;
        {
            char dest[50] = "";
<START>
            SNPRINTF(dest, strlen(data), "%s", data);
<END>
            printLine(data);
        }
    }
}
} 
