static int staticFive = 5;
void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    if(staticFive==5)
    {
<START>
<END>
        ; 
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
    }
}
