void FUN0(char * data)
{
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
    }
}
void FUN0(char * data);
void FUN2()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    char dataBuffer[100];
    data = dataBuffer;
<START>
<END>
    ; 
    funcPtr(data);
}
