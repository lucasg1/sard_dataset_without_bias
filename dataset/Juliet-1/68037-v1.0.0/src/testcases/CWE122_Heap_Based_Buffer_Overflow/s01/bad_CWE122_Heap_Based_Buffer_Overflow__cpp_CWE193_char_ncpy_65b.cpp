namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    data = new char[10];
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
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
