void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[100];
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
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
}
