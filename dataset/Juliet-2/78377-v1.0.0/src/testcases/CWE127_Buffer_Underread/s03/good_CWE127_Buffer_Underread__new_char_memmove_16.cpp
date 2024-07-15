namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        {
            char * dataBuffer = new char[100];
            memset(dataBuffer, 'A', 100-1);
            dataBuffer[100-1] = '\0';
            data = dataBuffer;
        }
        break;
    }
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
        memmove(dest, data, 100*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
}
} 
