namespace NAMESPACE0
{
char * FUN0(char * data)
{
    data = new char[10];
    return data;
}
} 
namespace NAMESPACE0
{
char * FUN0(char * data);
void FUN2()
{
    char * data;
    data = NULL;
    data = FUN0(data);
    {
        char source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = strlen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        printLine(data);
        delete [] data;
    }
}
} 
