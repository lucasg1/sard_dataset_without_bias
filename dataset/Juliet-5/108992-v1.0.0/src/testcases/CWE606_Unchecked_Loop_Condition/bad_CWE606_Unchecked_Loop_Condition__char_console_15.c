void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    switch(6)
    {
    case 6:
    {
        size_t dataLen = strlen(data);
        if (100-dataLen > 1)
        {
            if (fgets(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                dataLen = strlen(data);
                if (dataLen > 0 && data[dataLen-1] == '\n')
                {
                    data[dataLen-1] = '\0';
                }
            }
            else
            {
                printLine("fgets() failed");
                data[dataLen] = '\0';
            }
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        int i, n, intVariable;
        if (sscanf(data, "%d", &n) == 1)
        {
            intVariable = 0;
<START>
            for (i = 0; i < n; i++)
<END>
            {
                intVariable++; 
            }
            printIntLine(intVariable);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
