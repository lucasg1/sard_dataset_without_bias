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
            strncpy(dest, data, strlen(data));
<END>
            dest[50-1] = '\0'; 
            printLine(data);
        }
    }
}
} 
