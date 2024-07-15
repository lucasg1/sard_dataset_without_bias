namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    data = new char[100];
    strcpy(data, "A String");
    printLine(data);
    {
        char * data = dataRef;
<START>
<END>
        ; 
    }
}
} 
