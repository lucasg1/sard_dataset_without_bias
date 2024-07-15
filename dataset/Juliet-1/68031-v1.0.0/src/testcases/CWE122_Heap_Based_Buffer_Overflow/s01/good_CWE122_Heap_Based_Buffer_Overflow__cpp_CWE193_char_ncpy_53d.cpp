namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[10+1];
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
        char source[10+1] = SRC_STRING;
        strncpy(data, source, strlen(source) + 1);
        printLine(data);
        delete [] data;
    }
}
} 
