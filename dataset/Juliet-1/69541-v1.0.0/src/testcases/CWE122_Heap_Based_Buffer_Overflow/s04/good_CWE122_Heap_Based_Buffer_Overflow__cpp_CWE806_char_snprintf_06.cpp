static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = new char[100];
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    {
        char dest[50] = "";
        SNPRINTF(dest, strlen(data), "%s", data);
        printLine(data);
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    data = new char[100];
    if(STATIC_CONST_FIVE==5)
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    {
        char dest[50] = "";
        SNPRINTF(dest, strlen(data), "%s", data);
        printLine(data);
        delete [] data;
    }
}
} 
