namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    goto sink;
sink:
<START>
    delete [] data;
<END>
}
} 
