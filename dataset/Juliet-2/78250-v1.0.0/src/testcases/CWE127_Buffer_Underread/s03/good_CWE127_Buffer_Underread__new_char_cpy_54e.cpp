namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    {
        char * dataBuffer = new char[100];
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer;
    }
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(char * data);
void FUN0(char * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN3(char * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN7(char * data);
void FUN5(char * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN7(char * data)
{
    {
        char dest[100*2];
        memset(dest, 'C', 100*2-1); 
        dest[100*2-1] = '\0'; 
        strcpy(dest, data);
        printLine(dest);
    }
}
} 
