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
        strcpy(data, "A String");
        printLine(data);
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete[] data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new char[100];
        strcpy(data, "A String");
        printLine(data);
    }
    if(STATIC_CONST_TRUE)
    {
        delete[] data;
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
        char VAR1[100];
        data = VAR1;
        strcpy(data, "A String");
        printLine(data);
    }
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        char VAR1[100];
        data = VAR1;
        strcpy(data, "A String");
        printLine(data);
    }
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
}
} 
