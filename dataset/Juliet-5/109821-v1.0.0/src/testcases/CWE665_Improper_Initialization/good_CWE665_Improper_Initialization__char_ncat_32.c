void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[100];
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        data[0] = '\0'; 
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            size_t sourceLen;
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
            sourceLen = strlen(source);
            strncat(data, source, sourceLen);
            printLine(data);
        }
    }
}
