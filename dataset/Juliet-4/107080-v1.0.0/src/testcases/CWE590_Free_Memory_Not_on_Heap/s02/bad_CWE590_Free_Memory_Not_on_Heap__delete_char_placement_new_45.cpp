namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR1;
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
void FUN1()
{
    char * data;
    data = NULL; 
    {
        char buffer[sizeof(char)];
        char * dataBuffer = new(buffer) char;
        *dataBuffer = 'A';
        data = dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
} 
