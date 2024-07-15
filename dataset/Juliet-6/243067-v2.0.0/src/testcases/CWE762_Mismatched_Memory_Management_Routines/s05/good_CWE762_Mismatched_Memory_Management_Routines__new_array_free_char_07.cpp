static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new char[100];
    }
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        data = new char[100];
    }
    if(staticFive==5)
    {
        delete [] data;
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive==5)
    {
        free(data);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive==5)
    {
        free(data);
    }
}
} 
