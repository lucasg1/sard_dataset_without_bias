static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = new char[100];
    if(staticFive==5)
    {
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
    }
    {
        char dest[50] = "";
<START>
        strcpy(dest, data);
<END>
        printLine(data);
        delete [] data;
    }
}
} 
