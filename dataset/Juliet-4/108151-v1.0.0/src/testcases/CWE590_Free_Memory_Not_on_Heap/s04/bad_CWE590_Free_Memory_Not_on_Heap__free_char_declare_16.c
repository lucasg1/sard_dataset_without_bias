void FUN0()
{
    char * data;
    data = NULL; 
    while(1)
    {
        {
            char dataBuffer[100];
            memset(dataBuffer, 'A', 100-1); 
            dataBuffer[100-1] = '\0'; 
            data = dataBuffer;
        }
        break;
    }
    printLine(data);
<START>
    free(data);
<END>
}
