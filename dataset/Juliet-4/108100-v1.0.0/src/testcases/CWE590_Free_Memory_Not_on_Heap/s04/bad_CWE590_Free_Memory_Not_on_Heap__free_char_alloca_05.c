static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char * data;
    data = NULL; 
    if(staticTrue)
    {
        {
            char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
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
