void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[100];
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    {
        char * data = *dataPtr1;
        data = dataBuffer;
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            size_t i;
            char dest[100];
            memset(dest, 'C', 100-1); 
            dest[100-1] = '\0'; 
            for (i = 0; i < 100; i++)
            {
                dest[i] = data[i];
            }
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}
