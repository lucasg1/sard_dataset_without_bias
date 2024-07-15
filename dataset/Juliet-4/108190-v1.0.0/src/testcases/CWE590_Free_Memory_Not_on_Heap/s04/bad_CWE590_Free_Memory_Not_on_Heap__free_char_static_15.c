void FUN0()
{
    char * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        static char dataBuffer[100];
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printLine(data);
<START>
    free(data);
<END>
}
