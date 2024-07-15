namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char;
    goto sink;
sink:
<START>
    free(data);
<END>
}
} 
