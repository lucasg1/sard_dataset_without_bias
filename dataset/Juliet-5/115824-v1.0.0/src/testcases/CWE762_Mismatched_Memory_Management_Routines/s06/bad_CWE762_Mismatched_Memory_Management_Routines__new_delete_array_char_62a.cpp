namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char;
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
    delete [] data;
<END>
}
} 
