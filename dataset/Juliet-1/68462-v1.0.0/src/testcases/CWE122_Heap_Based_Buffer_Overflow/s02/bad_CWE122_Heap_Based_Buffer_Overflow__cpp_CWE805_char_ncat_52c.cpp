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
    data = new char[50];
    data[0] = '\0'; 
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        strncat(data, source, 100);
<END>
        printLine(data);
        delete [] data;
    }
}
} 
