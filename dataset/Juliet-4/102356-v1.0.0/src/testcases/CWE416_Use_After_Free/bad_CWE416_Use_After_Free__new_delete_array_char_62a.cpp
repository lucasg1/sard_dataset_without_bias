namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char[100];
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    delete [] data;
}
} 
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN2()
{
    char * data;
    data = NULL;
    FUN0(data);
<START>
    printLine(data);
<END>
}
} 
