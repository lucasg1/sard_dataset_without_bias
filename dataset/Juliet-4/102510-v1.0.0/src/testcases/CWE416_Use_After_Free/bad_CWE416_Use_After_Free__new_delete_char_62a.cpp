namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char;
    *data = 'A';
    delete data;
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
    printHexCharLine(*data);
<END>
}
} 
