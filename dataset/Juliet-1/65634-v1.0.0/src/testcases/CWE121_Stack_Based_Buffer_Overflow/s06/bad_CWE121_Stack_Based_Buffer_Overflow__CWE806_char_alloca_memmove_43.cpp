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
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    FUN0(data);
    {
        char dest[50] = "";
<START>
        memmove(dest, data, strlen(data)*sizeof(char));
<END>
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
} 
