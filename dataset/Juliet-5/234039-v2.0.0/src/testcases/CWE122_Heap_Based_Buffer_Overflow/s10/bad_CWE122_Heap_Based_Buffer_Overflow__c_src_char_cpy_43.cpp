namespace NAMESPACE0
{
void FUN0(char * &data)
{
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
}
void FUN1()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    FUN0(data);
    {
        char dest[50] = "";
<START>
        strcpy(dest, data);
<END>
        printLine(data);
        free(data);
    }
}
} 
