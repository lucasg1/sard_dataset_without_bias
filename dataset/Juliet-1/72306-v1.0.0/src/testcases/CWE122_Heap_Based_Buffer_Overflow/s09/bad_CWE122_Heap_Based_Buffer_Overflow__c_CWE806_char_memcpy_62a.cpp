namespace NAMESPACE0
{
void FUN0(char * &data)
{
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
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
<START>
        memcpy(dest, data, strlen(data)*sizeof(char));
<END>
        dest[50-1] = '\0'; 
        printLine(data);
        free(data);
    }
}
} 
