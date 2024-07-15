namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
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
    data = NULL;
    FUN0(data);
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        memcpy(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}
} 
