namespace NAMESPACE0
{
void FUN0(char * &data)
{
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
}
} 
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN2()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    FUN0(data);
    {
        char dest[50] = "";
        SNPRINTF(dest, strlen(data), "%s", data);
        printLine(data);
        free(data);
    }
}
} 
