void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char dataBuffer[100];
    data = dataBuffer;
    {
        char * data = *dataPtr1;
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char dest[50] = "";
            SNPRINTF(dest, strlen(data), "%s", data);
            printLine(data);
        }
    }
}
