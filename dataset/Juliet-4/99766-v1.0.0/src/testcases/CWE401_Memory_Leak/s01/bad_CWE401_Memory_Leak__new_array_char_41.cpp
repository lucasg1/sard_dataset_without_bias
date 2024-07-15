namespace NAMESPACE0
{
void FUN0(char * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[100];
    strcpy(data, "A String");
    printLine(data);
    FUN0(data);
}
} 
