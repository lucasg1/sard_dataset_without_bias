static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    char * data;
    data = NULL; 
    if(STATIC_CONST_FIVE==5)
    {
        {
            char dataBuffer[100];
            memset(dataBuffer, 'A', 100-1); 
            dataBuffer[100-1] = '\0'; 
            data = dataBuffer;
        }
    }
    printLine(data);
<START>
    free(data);
<END>
}
