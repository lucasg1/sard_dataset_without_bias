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
void FUN1(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = new char[100];
    data[0] = '\0'; 
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN0(char * data)
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
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcpy(data, source);
        printLine(data);
        delete [] data;
    }
}
} 
