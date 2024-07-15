namespace NAMESPACE0
{
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR2;
    printHexCharLine(*data);
    delete data;
}
void FUN1()
{
    char * data;
    data = NULL; 
    {
        char * dataBuffer = new char;
        *dataBuffer = 'A';
        data = dataBuffer;
    }
    VAR2 = data;
    FUN0();
}
} 
