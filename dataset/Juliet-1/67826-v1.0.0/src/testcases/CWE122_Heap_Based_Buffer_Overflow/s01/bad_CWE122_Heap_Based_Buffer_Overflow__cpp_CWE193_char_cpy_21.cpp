namespace NAMESPACE0
{
static int VAR1 = 0;
static char * FUN0(char * data)
{
    if(VAR1)
    {
        data = new char[10];
    }
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN0(data);
    {
        char source[10+1] = SRC_STRING;
<START>
        strcpy(data, source);
<END>
        printLine(data);
        delete [] data;
    }
    ;
}
} 
