static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
        data[0] = '\0'; 
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcpy(data, source);
        printLine(data);
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = new char[100];
        data[0] = '\0'; 
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcpy(data, source);
        printLine(data);
        delete [] data;
    }
}
} 
