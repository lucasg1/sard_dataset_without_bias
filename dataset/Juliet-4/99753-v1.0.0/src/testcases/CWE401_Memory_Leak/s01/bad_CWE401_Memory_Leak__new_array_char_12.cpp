namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new char[100];
        strcpy(data, "A String");
        printLine(data);
    }
    else
    {
        char VAR1[100];
        data = VAR1;
        strcpy(data, "A String");
        printLine(data);
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
<END>
        ; 
    }
    else
    {
        delete[] data;
    }
}
} 
