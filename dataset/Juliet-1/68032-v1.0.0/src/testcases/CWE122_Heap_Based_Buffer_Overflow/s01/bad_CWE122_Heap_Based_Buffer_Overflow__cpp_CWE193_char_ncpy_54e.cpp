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
void FUN1(char * data);
void FUN5()
{
    char * data;
    data = NULL;
    data = new char[10];
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN6(char * data);
void FUN2(char * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(char * data)
{
    {
        char source[10+1] = SRC_STRING;
<START>
        strncpy(data, source, strlen(source) + 1);
<END>
        printLine(data);
        delete [] data;
    }
}
} 
