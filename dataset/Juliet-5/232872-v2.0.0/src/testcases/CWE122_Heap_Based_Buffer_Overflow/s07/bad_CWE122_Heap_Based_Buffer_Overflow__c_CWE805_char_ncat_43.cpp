namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = (char *)malloc(50*sizeof(char));
    if (data == NULL) {exit(-1);}
    data[0] = '\0'; 
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        strncat(data, source, 100);
<END>
        printLine(data);
        free(data);
    }
}
} 
