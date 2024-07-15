namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL;
    {
        char * data = *dataPtr1;
        {
            char * dataBuffer = new char[100];
            memset(dataBuffer, 'A', 100-1);
            dataBuffer[100-1] = '\0';
            data = dataBuffer - 8;
        }
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char dest[100];
            memset(dest, 'C', 100-1); 
            dest[100-1] = '\0'; 
<START>
            memcpy(dest, data, 100*sizeof(char));
<END>
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}
} 
