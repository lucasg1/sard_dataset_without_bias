namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    {
        char * dataBuffer = new char[100];
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer;
    }
    {
        char * data = dataRef;
        {
            char dest[100*2];
            memset(dest, 'C', 100*2-1); 
            dest[100*2-1] = '\0'; 
            strcpy(dest, data);
            printLine(dest);
        }
    }
}
} 
