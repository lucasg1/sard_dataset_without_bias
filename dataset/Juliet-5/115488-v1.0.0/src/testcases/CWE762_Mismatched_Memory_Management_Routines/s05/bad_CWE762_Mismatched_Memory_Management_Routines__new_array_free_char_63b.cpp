namespace NAMESPACE0
{
void FUN0(char * * dataPtr);
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[100];
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
<START>
    free(data);
<END>
}
} 
