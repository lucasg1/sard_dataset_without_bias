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
        data = new char[100];
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new char[100];
    }
    if(STATIC_CONST_TRUE)
    {
        delete [] data;
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_TRUE)
    {
        free(data);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_TRUE)
    {
        free(data);
    }
}
} 
