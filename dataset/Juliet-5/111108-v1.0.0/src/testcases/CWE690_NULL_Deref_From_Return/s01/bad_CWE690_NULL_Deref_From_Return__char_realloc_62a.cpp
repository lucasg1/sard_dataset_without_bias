namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = (char *)realloc(data, 20*sizeof(char));
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
    strcpy(data, "Initialize");
<END>
    printLine(data);
    free(data);
}
} 
