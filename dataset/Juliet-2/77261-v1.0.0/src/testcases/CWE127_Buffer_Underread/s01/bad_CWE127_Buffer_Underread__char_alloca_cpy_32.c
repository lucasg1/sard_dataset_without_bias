void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    {
        char * data = *dataPtr1;
        data = dataBuffer - 8;
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char dest[100*2];
            memset(dest, 'C', 100*2-1); 
            dest[100*2-1] = '\0'; 
<START>
            strcpy(dest, data);
<END>
            printLine(dest);
        }
    }
}
