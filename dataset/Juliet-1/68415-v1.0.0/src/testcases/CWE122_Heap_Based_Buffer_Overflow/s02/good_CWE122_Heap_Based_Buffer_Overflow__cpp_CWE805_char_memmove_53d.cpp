namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[100];
    data[0] = '\0'; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(char * data);
void FUN4(char * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(char * data);
void FUN0(char * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN3(char * data)
{
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        memmove(data, source, 100*sizeof(char));
        data[100-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
