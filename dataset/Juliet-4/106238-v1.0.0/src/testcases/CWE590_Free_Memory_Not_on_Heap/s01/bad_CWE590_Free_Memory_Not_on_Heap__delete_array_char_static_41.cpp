namespace NAMESPACE0
{
void FUN0(char * data)
{
    printLine(data);
<START>
    delete [] data;
<END>
}
void FUN1()
{
    char * data;
    data = NULL; 
    {
        static char dataBuffer[100];
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    FUN0(data);
}
} 
