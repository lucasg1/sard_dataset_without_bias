static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new char[50];
        data[0] = '\0'; 
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        memmove(data, source, 100*sizeof(char));
<END>
        data[100-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
