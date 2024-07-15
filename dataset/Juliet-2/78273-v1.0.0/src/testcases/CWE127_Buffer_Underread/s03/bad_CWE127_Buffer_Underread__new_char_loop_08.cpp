static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    char * data;
    data = NULL;
    if(FUN0())
    {
        {
            char * dataBuffer = new char[100];
            memset(dataBuffer, 'A', 100-1);
            dataBuffer[100-1] = '\0';
            data = dataBuffer - 8;
        }
    }
    {
        size_t i;
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[100-1] = '\0';
        printLine(dest);
    }
}
} 
