namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    {
        char * data = dataRef;
        {
            char dest[50] = "";
            SNPRINTF(dest, strlen(data), "%s", data);
            printLine(data);
        }
    }
}
} 
