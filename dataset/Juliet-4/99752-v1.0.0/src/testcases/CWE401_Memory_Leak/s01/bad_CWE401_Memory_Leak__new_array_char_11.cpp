namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char[100];
        strcpy(data, "A String");
        printLine(data);
    }
    if(globalReturnsTrue())
    {
<START>
<END>
        ; 
    }
}
} 
