namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[50];
    data[0] = '\0'; 
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
void FUN4(char * data)
{
    {
        size_t i;
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        data[100-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
