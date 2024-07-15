namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
<START>
    delete [] data;
<END>
}
} 
