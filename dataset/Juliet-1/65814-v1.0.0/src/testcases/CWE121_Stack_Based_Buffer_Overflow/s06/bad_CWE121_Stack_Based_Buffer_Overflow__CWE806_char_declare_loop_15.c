void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    switch(6)
    {
    case 6:
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        char dest[50] = "";
        size_t i, dataLen;
        dataLen = strlen(data);
        for (i = 0; i < dataLen; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
