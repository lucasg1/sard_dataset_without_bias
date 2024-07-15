void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
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
<START>
            strcat(dest, data);
<END>
            printLine(data);
        }
    }
}
