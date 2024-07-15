namespace NAMESPACE0
{
void FUN0()
{
    int i;
    char * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
    {
        {
            char dataBuffer[100];
            memset(dataBuffer, 'A', 100-1); 
            dataBuffer[100-1] = '\0'; 
            data = dataBuffer;
        }
    }
    printLine(data);
<START>
    delete [] data;
<END>
}
} 
