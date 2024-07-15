namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(char * data);
void FUN2(char * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN7()
{
    char * data;
    data = NULL;
    {
        char * dataBuffer = new char[100];
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer - 8;
    }
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN4(char * data)
{
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
