namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR1;
    {
        char source[10+1] = SRC_STRING;
<START>
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
<END>
        printLine(data);
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[10];
    VAR1 = data;
    FUN0();
}
} 
