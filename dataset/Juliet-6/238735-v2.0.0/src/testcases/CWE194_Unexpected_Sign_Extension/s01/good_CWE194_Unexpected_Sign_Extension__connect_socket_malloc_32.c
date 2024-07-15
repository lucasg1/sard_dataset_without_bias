void FUN0()
{
    short data;
    short *dataPtr1 = &data;
    short *dataPtr2 = &data;
    data = 0;
    {
        short data = *dataPtr1;
        data = 100-1;
        *dataPtr1 = data;
    }
    {
        short data = *dataPtr2;
        if (data < 100)
        {
            char * dataBuffer = (char *)malloc(data);
            if (dataBuffer == NULL) {exit(-1);}
            memset(dataBuffer, 'A', data-1);
            dataBuffer[data-1] = '\0';
            printLine(dataBuffer);
            free(dataBuffer);
        }
    }
}
