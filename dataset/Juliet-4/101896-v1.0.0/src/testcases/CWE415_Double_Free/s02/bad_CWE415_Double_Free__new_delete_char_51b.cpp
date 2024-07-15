namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = new char;
    delete data;
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
<START>
    delete data;
<END>
}
} 
