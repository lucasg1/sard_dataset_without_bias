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
    data = new char[100];
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN6(char * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN6(char * data);
void FUN0(char * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data)
{
    {
        char dest[50] = "";
        memmove(dest, data, strlen(data)*sizeof(char));
        dest[50-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
