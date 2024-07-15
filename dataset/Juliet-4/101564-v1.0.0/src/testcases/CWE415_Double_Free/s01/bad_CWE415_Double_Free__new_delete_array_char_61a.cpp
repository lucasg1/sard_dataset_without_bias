namespace NAMESPACE0
{
char * FUN0(char * data)
{
    data = new char[100];
    delete [] data;
    return data;
}
} 
namespace NAMESPACE0
{
char * FUN0(char * data);
void FUN2()
{
    char * data;
    data = NULL;
    data = FUN0(data);
<START>
    delete [] data;
<END>
}
} 
