namespace NAMESPACE0
{
extern int VAR1;
char * FUN0(char * data)
{
    if(VAR1)
    {
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
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
    data = new char[100];
    VAR1 = 1; 
    data = FUN0(data);
    {
        char dest[50] = "";
        size_t i, dataLen;
        dataLen = strlen(data);
        for (i = 0; i < dataLen; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[50-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
    ;
}
} 
