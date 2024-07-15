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
void FUN3()
{
    char * data;
    data = NULL;
    data = new char[10+1];
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN2(char * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN5(char * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        char source[10+1] = SRC_STRING;
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        delete [] data;
    }
}
} 
