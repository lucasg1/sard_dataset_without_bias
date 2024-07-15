namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char[100];
    goto sink;
sink:
<START>
    free(data);
<END>
}
} 
