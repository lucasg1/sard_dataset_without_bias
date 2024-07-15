namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL; 
    data = (char *)malloc(20*sizeof(char));
    {
        char * data = dataRef;
<START>
        strcpy(data, "Initialize");
<END>
        printLine(data);
        free(data);
    }
}
} 
