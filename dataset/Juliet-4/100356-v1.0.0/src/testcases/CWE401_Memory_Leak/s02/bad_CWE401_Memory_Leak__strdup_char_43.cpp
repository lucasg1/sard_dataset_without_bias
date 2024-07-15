namespace NAMESPACE0
{
void FUN0(char * &data)
{
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
<START>
<END>
    ; 
}
} 
