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
void FUN5()
{
    char * data;
    data = NULL;
    data = new char[100];
    data[0] = '\0'; 
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN4(char * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN2(char * data)
{
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        memcpy(data, source, 100*sizeof(char));
        data[100-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
