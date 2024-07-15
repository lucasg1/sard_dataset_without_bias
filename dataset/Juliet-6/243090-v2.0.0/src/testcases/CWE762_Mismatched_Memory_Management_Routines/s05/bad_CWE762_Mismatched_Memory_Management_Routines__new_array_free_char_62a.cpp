namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char[100];
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
    free(data);
<END>
}
} 
