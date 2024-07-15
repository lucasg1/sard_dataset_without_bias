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
    if (data != NULL)
    {
        strcpy(data, "Initialize");
        printLine(data);
        free(data);
    }
}
} 
