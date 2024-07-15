namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = new char[100];
        strcpy(data, "A String");
        printLine(data);
    }
    if(globalTrue)
    {
<START>
<END>
        ; 
    }
}
} 
