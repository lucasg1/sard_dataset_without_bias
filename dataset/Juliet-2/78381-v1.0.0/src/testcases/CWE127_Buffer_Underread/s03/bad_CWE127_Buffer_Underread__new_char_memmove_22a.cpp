namespace NAMESPACE0
{
extern int VAR1;
char * FUN0(char * data)
{
    if(VAR1)
    {
        {
            char * dataBuffer = new char[100];
            memset(dataBuffer, 'A', 100-1);
            dataBuffer[100-1] = '\0';
            data = dataBuffer - 8;
        }
    }
    return data;
}
} 
namespace NAMESPACE0
{
int VAR1 = 0;
char * FUN0(char * data);
void FUN2()
{
    char * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN0(data);
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
    ;
}
} 
