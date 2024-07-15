namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
<START>
        memcpy(dest, data, strlen(dest)*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    data = new char[50];
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    funcPtr(data);
}
} 
