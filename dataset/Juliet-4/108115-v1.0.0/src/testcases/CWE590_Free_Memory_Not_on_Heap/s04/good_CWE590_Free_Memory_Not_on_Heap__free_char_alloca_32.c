void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL; 
    {
        char * data = *dataPtr1;
        {
            char * dataBuffer = (char *)malloc(100*sizeof(char));
            if (dataBuffer == NULL)
            {
                printLine("malloc() failed");
                exit(1);
            }
            memset(dataBuffer, 'A', 100-1); 
            dataBuffer[100-1] = '\0'; 
            data = dataBuffer;
        }
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        printLine(data);
        free(data);
    }
}
