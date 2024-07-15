namespace NAMESPACE0
{
char * FUN0(char * data)
{
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
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
    delete data;
<END>
}
} 
