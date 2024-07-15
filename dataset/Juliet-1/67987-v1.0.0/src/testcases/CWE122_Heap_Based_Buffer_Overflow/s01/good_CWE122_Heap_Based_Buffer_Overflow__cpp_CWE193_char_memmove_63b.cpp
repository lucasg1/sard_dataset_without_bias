namespace NAMESPACE0
{
void FUN0(char * * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[10+1];
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    {
        char source[10+1] = SRC_STRING;
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        delete [] data;
    }
}
} 
