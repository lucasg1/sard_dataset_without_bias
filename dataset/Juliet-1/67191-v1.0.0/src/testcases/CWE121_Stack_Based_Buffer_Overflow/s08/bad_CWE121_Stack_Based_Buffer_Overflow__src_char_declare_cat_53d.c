void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN1(char * data);
void FUN3(char * data)
{
    FUN1(data);
}
void FUN3(char * data);
void FUN5()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    FUN3(data);
}
void FUN0(char * data)
{
    {
        char dest[50] = "";
<START>
        strcat(dest, data);
<END>
        printLine(data);
    }
}
