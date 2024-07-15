namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char[100];
    strcpy(data, "A String");
    printLine(data);
    goto sink;
sink:
<START>
<END>
    ; 
}
} 
