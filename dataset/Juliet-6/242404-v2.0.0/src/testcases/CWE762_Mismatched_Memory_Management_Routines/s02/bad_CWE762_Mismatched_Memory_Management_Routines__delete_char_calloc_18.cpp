namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
<START>
    delete data;
<END>
}
} 
