static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_FIVE==5)
    {
        free(data);
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char;
    }
    if(STATIC_CONST_FIVE==5)
    {
        delete data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new char;
    }
    if(STATIC_CONST_FIVE==5)
    {
        delete data;
    }
}
} 
