namespace NAMESPACE0
{
void FUN0(char * &data)
{
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
}
void FUN1()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    FUN0(data);
    {
        char dest[50] = "";
<START>
        strcpy(dest, data);
<END>
        printLine(data);
    }
}
} 
