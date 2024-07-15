namespace NAMESPACE0
{
void FUN0(char * &data)
{
    {
        char * dataBuffer = (char *)malloc(100*sizeof(char));
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer - 8;
    }
}
} 
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN2()
{
    char * data;
    data = NULL;
    FUN0(data);
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
<START>
        memmove(dest, data, 100*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
    }
}
} 
