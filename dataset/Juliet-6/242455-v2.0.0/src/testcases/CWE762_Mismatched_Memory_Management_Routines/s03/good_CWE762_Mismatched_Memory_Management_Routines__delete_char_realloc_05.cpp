static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = NULL;
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        data = NULL;
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char;
    }
    if(staticTrue)
    {
        delete data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = new char;
    }
    if(staticTrue)
    {
        delete data;
    }
}
} 
